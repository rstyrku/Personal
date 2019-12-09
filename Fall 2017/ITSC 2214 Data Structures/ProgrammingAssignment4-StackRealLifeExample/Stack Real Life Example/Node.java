/**
 * Created by malmardi on 9/21/2017.
 */
public class Node {

    //Each node has two values: data to save the value provided by the user and link to point to the next node in the stack
    protected char data;
    protected Node link;


    /*  Constructor  */
    public Node(char d, Node n) {
        data = d;
        link = n;
    }

    //To access the values of data and link, we need to use public methods usually named: set and get

    /*  Function to set link to next Node  */
    public void setLink(Node n) {
        link = n;
    }

    /*  Function to set data to current Node  */
    public void setData(char d) {
        data = d;
    }

    /*  Function to get link to next node  */
    public Node getLink() {
        return link;
    }

    /*  Function to get data from current Node  */
    public char getData() {
        return data;
    }
}

