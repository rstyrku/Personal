package com.DatabaseTesting;

import java.sql.*;

public class Main {

    public static void main(String[] args) {

        Connection c = null;
        Statement stmt = null;
        try {
            Class.forName("org.postgresql.Driver");
            c = DriverManager
                    .getConnection("jdbc:postgresql://localhost:5432/sample_db");
            c.setAutoCommit(false);
            System.out.println("Opened database successfully");

            stmt = c.createStatement();
            String entry =
                    "INSERT INTO carInventory VALUES(1, 2004, 'Lexus', 'ES330')";
            stmt.executeUpdate(entry);
            stmt.close();
            c.commit();
            c.close();
        }

        catch ( Exception e ) {
            System.err.println( e.getClass().getName()+": "+ e.getMessage() );
            System.exit(0);
        }

        System.out.println("Table updated successfully");

    }

}
