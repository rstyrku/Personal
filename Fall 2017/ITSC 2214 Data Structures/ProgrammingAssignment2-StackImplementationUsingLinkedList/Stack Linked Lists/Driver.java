import java.util.Scanner;

/**
 * Created by malmardi on 9/21/2017.
 */
public class Driver {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        LinkedStack ls = new LinkedStack();
        System.out.println("Which command would you like to select?\n");
        char ch;
        do {
            System.out.println("\nLinked Stack Operations");
            System.out.println("1. push");
            System.out.println("2. pop");
            System.out.println("3. peek");
            System.out.println("4. check empty");
            System.out.println("5. size");
            int command = scan.nextInt();
            switch(command){
                case 1:{
                    System.out.println("What value would you like to push?");
                    int value=scan.nextInt();
                    ls.push(value);
                    break;}
                case 2:{
                    System.out.println("The top element in the Stack was:");
                    System.out.println(ls.pop());
                    break;}
                case 3:{
                    System.out.println("The current top element in the Stack is:");
                    System.out.println(ls.peek());
                    break;}
                case 4: {
                    if (ls.isEmpty () == true)
                        System.out.println ( "The Stack is currently Empty" );
                    else
                        System.out.println ( "The Stack is not empty, at least 1 element exists." );
                    break;
                }
                case 5:{
                    System.out.println("The current size of your Stack is:"+ls.getSize());
                    break;
                }
            }
            /* display stack */
            System.out.println("Your current stack is:");
            ls.display();
            System.out.println("\nDo you want to continue (Type y or n) \n");
            ch = scan.next().charAt(0);

        } while (ch == 'Y' || ch == 'y');

    }
}
