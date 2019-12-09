package com;

//All Includes for the PostgreSQL Connection
import java.sql.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;


//Class for database connection and Communication Methods
public class MacTrakDBCom {

    //Initialize the database and table name and url.
    String dataBase;
    String table;
    Connection connect;
    Statement stmt;

    //Constructor
    public MacTrakDBCom(String dataBaseUrl, String tableName) {
        dataBase = dataBaseUrl;
        table = tableName;

        //Establish Connection
        connect = null;
        stmt = null;

        try {
            Class.forName("org.postgresql.Driver");
            connect = DriverManager
                    .getConnection(dataBase);

            //Test statement whether database opened (Can be uncommented to test)
            //System.out.println("Opened database successfully");

            //Creates Statement for the specific connection
            stmt = connect.createStatement();
        }

        //Catches any database connection errors.
        catch ( Exception e ) {
            System.err.println( e.getClass().getName()+": "+ e.getMessage() );
            System.exit(0);
        }
    }


    //Destructor
    void close(){
        //Closes the connection to the Database
        try {
            stmt.close();
            connect.close();
        }

        catch ( Exception e ) {
            System.err.println( e.getClass().getName()+": "+ e.getMessage() );
            System.exit(0);
        }
    }

    //Method to Add an Entry to the Database
    public void addEntry(String timeStamp, String location, String wap, String macAddress) throws SQLException {


        //Creates the String Query to Add to the Database based on Parameters
        String listQuery = "SELECT maclist FROM data WHERE stamptime = '" + timeStamp + "' AND location = '" + location + "' AND wap = '" + wap + "';";
        ResultSet rs = null;

        //Creates Statement for the specific connection
        stmt = connect.createStatement(ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_READ_ONLY);

        //Sets sql statement equal to query and runs it.
        String sql = listQuery;

        //Saves result of query to Result Set RS
        rs = stmt.executeQuery(sql);

        //Moves Cursor to end of ResultSet
        rs.last();

        //Converts the ResultSet into a list of Strings
        String list = rs.getString("maclist");

        //Splits the list based on Regular Expression
        String[] splitList;
        splitList = list.split(", ");

        //Converts the Array to a Set to remove Duplicates
        Set<String> setOfMacs= new HashSet<String>();
        Collections.addAll(setOfMacs, splitList);

        //Adds the new Mac Address to the Set
        setOfMacs.add(macAddress);

        //Converts the Set back to an Array
        splitList = setOfMacs.toArray(new String[setOfMacs.size()]);

        //Combines Into 1 String to Add to the Query
        list = "";
        for(int i = 0; i<splitList.length; i++){
            if (i >0){
                list += ", ";
            }

            list += splitList[i];
        }

        //Sets connection back for insert.
        stmt = connect.createStatement();

        //Inserts the entry, If there is a Conflict it will add the append the MAC to the list of the macs already present.
        String query = "INSERT INTO data VALUES ('" + timeStamp + "', '" + location  + "', '" + wap + "', '" + list + "')" +
                " ON CONFLICT (stamptime, location, wap) DO UPDATE SET maclist = '" + list + "' WHERE data.stamptime = '" +
                timeStamp + "' AND data.location = '" + location + "' AND data.wap = '" + wap + "';";

        //Sets sql statement equal to query and runs it.
        String sql1 = query;
        stmt.executeUpdate(sql1);

        //Temporary success statement to know it was added properly. Can be uncommented to test
        //System.out.println("Database Updated Successfully");
    }


    //Method to retrieve Result Set using necessary arguments
    public ResultSet selectData(String location, String startTime, String stopTime) throws SQLException {

        //Creates the String Query to Receive Data from the DataBase based on start time, stop time, and String location.
        String query = "SELECT location, wap, maclist FROM data WHERE location = '" + location + "' AND stamptime BETWEEN '" +
                startTime + "' AND '" + stopTime + "'";

        //Initializes the ResultSet
        ResultSet rs = null;


            //Creates Statement for the specific connection
            stmt = connect.createStatement(ResultSet.TYPE_SCROLL_INSENSITIVE, ResultSet.CONCUR_READ_ONLY);

            //Sets sql statement equal to query and runs it.
            String sql = query;

            //Saves result of query to Result Set RS
            rs = stmt.executeQuery(sql);

            //Moves Cursor to end of ResultSet
            rs.last();

            //Print statement to test the result sets outputs (Can be uncommented to test)
                System.out.println(rs.getArray("maclist"));


        //Temporary success statement to know it was added properly. (Can be uncommented to test)
            System.out.println("Database Updated Successfully");

        return rs;
    }

    //Method to add entry based on ArrayList.
    public void addEntry(String timeStamp, String location, String wap, ArrayList<String> macLists) throws SQLException {

        //Converts ArrayList to String
        String list = "";
        for(int i = 0; i < macLists.size(); i++){
            if (i>0){
                list += ", ";
            }

            list += macLists.get(i);
        }

        addEntry(timeStamp, location, wap, list);
    }


    //Main Method to Test Class
    public static void main(String[] args) throws SQLException {

        //Initialize the Communication Object with Database URL and Table Name
        MacTrakDBCom mt = new MacTrakDBCom("jdbc:postgresql://localhost:5432/mactracker", "jdbc:postgresql://localhost:5432/mactracker");

        //Tests the method to add an entry to the database
        mt.addEntry("2019-10-07 00:05:55", "Atkins", "Atkins203", "0A:6F:08:86:01:17");

        //Tests the method to select data from DB
        //mt.selectData("Atkins", "2019-09-17 00:01:06", "2019-10-19 10:19:50");

        mt.close();
    }

}

