import java.util.NoSuchElementException;

public class StackArray {


    int top, size, length;
    int array[];

    public StackArray(int _size)
    {

        length=0; //represents the size of the stack
        top=-1; //a pointer to the last element in the stack
        size=_size; //we get the size from the user
        array=new int[size]; //hold the stack values
    }




    public void push(int value) {
        //check if there is space in the array. Hint: compare top with the length of the array
        if(top==length)
            System.out.println("The Stack is Full");
        if(top<length){
        //update top
            top=top+1;
        //Add the element to the array
            array[top]=value;
        //update length
            length=length+1;
    }}

    public int pop() {
        //if statement to make sure that the stack is not empty
        if(isEmpty()==true){
            System.out.println("The Stack is Empty.");
        }
        //update top
        top=top-1;
        //update length
        length=length-1;
        //Return the last element in the array. You can use top to access the last element
        return array[top+1];
     }

    public int peek() {

        //We need to check if the stack is empty first
        if (isEmpty() == true)
            throw new NoSuchElementException("Stack is empty");
        else
            return array[top];
    }

    public boolean isEmpty() {
        //You can use either top or length
        if (top == -1)
            return true;
        else
            return false;
    }

    public int size() {

        return length;
    }
    public void printarray(){
        System.out.println("Your Stack Is:");
        int start=0;
        for(start=top;start>=0;start--){
            System.out.println(array[start]);

        }
    }

}
