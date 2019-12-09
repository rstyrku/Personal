import java.util.Scanner;

public class Driver {

    public static void main(String args[])
    {
        //ask the user to enter the size of the array

        Scanner sc=new Scanner(System.in);
        System.out.println("Please enter the size of the stack");
        int size= sc.nextInt();
        StackArray stack1=new StackArray(size);
        String repeat="yes";

        //Complete the remaining of the code.
        while(repeat=="yes") {
            //Display the options to the user (methods/functions names)
            //Ask the user to select one of the methods that he/she wants to test. Use scanner
            System.out.println ( "What function/ method do you want to use?" );
            System.out.println ( "For Push press (1)" );
            System.out.println ( "For Pop press (2)" );
            System.out.println ( "For Peek press (3)" );
            System.out.println ( "For Size press (4)" );
            System.out.println ( "For isEmpty press (5)" );

            //Scanner to get command
            int command = sc.nextInt ();

            //To do the above steps you need to write a switch (for the options) surrounded by a loop (to keep asking the user)
            //Call the method based on the user's selection
            switch(command){
                case 1:{
                    System.out.println("What value would you like to push?");
                    int value=sc.nextInt();
                    stack1.push(value);
                    break;}
                case 2:{
                    System.out.println("The top element in the Stack was:");
                    System.out.println(stack1.pop());
                    break;}
                case 3:{
                    System.out.println("The current top element in the Stack is:");
                    System.out.println(stack1.peek());
                    break;}
                case 4:{
                    System.out.println("The current size of your Stack is:"+stack1.size());
                    break;
                }
                case 5:{
                    if (stack1.isEmpty()==true)
                        System.out.println("The Stack is currently Empty");
                    else
                        System.out.println("The Stack is not empty, at least 1 element exists.");
                    break;
                }
                }

            //Display the stack after calling the method/function. You might need to implement a function for that in the StackArray class
            stack1.printarray();

            //Ask the user if he/she wants to test another method or not. If yes, repeat the steps. Otherwise, break
            System.out.println("Do you want to continue. Type 1 for Yes and 2 For No:");
            int choice=sc.nextInt();
            if (choice==1)
                    repeat="yes";
            else if (choice==2)
                    repeat="no";
            else
                System.out.println("Unrecognized command, going back to Options");
            }
        }
    }

