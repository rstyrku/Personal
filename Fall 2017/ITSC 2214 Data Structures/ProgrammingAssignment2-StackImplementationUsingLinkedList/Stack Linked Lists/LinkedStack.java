import java.util.NoSuchElementException;

/**
 * Created by malmardi on 9/21/2017.
 */
public class LinkedStack
{
        protected Node top ;// apointer to the last element in the stack
        protected int size ;//the size of the stack. Has to be updated when you push or pop

        /*  Constructor  */
        public LinkedStack()
        {
            top = null;
            size = 0;
        }
        /*  Function to check if stack is empty */
        public boolean isEmpty()
        {
            return top == null;
        }
        /*  Function to get the size of the stack */
        public int getSize()
        {
            return size;
        }
        /*  Function to push an element to the stack */
        public void push(int data)
        {
            Node nptr = new Node (data, null);
            //check if the stack is empty
            if (isEmpty()==true){
            //if it is empty:
            //then: make the top points to the object you created
            }
            else {
            //make nptr points to the last element in the stack. Hint: you can get the address of the last node by using top and setLink function
                nptr.setLink(top);
            }
            top=nptr;
            //Finally: update the size of the stack
            size=size+1;

        }
        /*  Function to pop an element from the stack */
        public int pop() {
            //check if the stack is empty. Throw an exception if so
            if (isEmpty () == true) {
                System.out.println ( "The Stack is Empty" );
            }
            //otherwise:
            else {
                //create a new pointer that has the same value of top
                Node ptr = top;
                //move the pointer just below the last element. Hint: you can do that by using getLink function
                top=ptr.getLink();
                //update the size
                size = size - 1;
                //return the removed value
                return ptr.getData ();
            }
            return 0;

        }
        /*  Function to check the top element of the stack */
        public int peek()
        {
            if (isEmpty() )
                throw new NoSuchElementException("Underflow Exception") ;
            return top.getData();
        }
        /*  Function to display the status of the stack */
        public void display()
        {
            //Write you code here
            if (top==null)
                System.out.println("Empty");
            Node next=top;
            while (next!=null){
                System.out.println(next.getData());
                next=next.getLink();
            }
        }
}