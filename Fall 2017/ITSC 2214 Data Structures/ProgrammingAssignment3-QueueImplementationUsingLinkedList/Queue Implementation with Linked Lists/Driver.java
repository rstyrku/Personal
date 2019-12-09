import java.util.Scanner;

/**
 * Created by malmardi on 9/21/2017.
 */
public class Driver {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        LinkedQueue ls = new LinkedQueue();
        System.out.println("Which command would you like to select?\n");
        char ch;
        do {
            System.out.println("\nLinked Queue Operations");
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
                    System.out.println("The top element in the Queue was:");
                    System.out.println(ls.pop());
                    break;}
                case 3:{
                    System.out.println("The current top element in the Queue is:");
                    System.out.println(ls.peek());
                    break;}
                case 4: {
                    if (ls.isEmpty () == true)
                        System.out.println ( "The Queue is currently Empty" );
                    else
                        System.out.println ( "The Queue is not empty, at least 1 element exists." );
                    break;
                }
                case 5:{
                    System.out.println("The current size of your Queue is:"+ls.getSize());
                    break;
                }
            }
            /* display Queue */
            System.out.println("Your current Queue is:");
            ls.display();
            System.out.println("\nDo you want to continue (Type y or n) \n");
            ch = scan.next().charAt(0);

        } while (ch == 'Y' || ch == 'y');

    }
}
