public class BinarySearchTree {
    public Node root;

    public BinarySearchTree() {
        root = null;
    }

    public void insert(String data) {
        Node newNode = new Node ( data );
        if (root == null) {
            root = newNode;
            newNode.linkLeft = null;
            newNode.linkRight = null;
        } else {
            Node current = root;
            while (current != null) {
                if (newNode.value.compareTo ( current.value ) < 0) {
                    if (current.linkLeft == null) {
                        current.linkLeft = newNode;
                        current = null;
                    } else {
                        current = current.linkLeft;
                    }
                } else {
                    if (current.linkRight == null) {
                        current.linkRight = newNode;
                        current = null;
                    } else {
                        current = current.linkRight;
                    }
                }
            }
        }
        newNode.linkLeft = null;
        newNode.linkRight = null;

    }

    public Node search(String key) {
        System.out.println ( "Searching for: " + key );
        Node current = root;
        while (current != null) {
            if (current.value == key) {
                System.out.println ( "Found: " + current.value );
                break;

            } else if (key.compareTo ( current.value ) < 0) {
                current = current.linkLeft;
            } else {
                current = current.linkRight;
            }
        }
        if (current == null) {
            System.out.println ( key + " was not found" );
        }
        return null;// Not Found
    }

    public void printPostOrder() {
        System.out.print ( "\nPost Order: " );
        printPostOrder ( root );
    }

    public void printPreOrder() {
        System.out.print ( "\nPre Order: " );
        printPreOrder ( root );
    }

    public void printInOrder() {
        System.out.print ( "\nIn Order: " );
        printInOrder ( root );
    }

    public void printPostOrder(Node root) {

        if (root != null) {
            printPostOrder ( root.linkLeft );
            printPostOrder ( root.linkRight );
            System.out.print ( root.value + " " );
        }
    }

    public void printPreOrder(Node root) {
        if (root != null) {
            System.out.print ( root.value + " " );
            printPreOrder ( root.linkLeft );
            printPreOrder ( root.linkRight );
        }
    }

    public void printInOrder(Node root) {
        if (root != null){
            printInOrder ( root.linkLeft );
            printInOrder ( root.linkRight );
            System.out.print ( root.value+" ");
        }
    }
}

