import java.util.Scanner;

public class Driver {

    public static void main(String[] args) {
        System.out.println("Phrase reversal Program\n");
        Scanner scan = new Scanner ( System.in );
        LinkedStack ls = new LinkedStack ();
        char answer='y';
        do {
            System.out.println ( "Which phrase would you like to reverse?\n" );
            char ch;
            String input = scan.nextLine ();
            for (int point = 0; point < input.length (); point++) {
                char letter = input.charAt ( point );
                ls.push ( letter );
            }
            String output = "";
            while (ls.isEmpty () != true) {
                char current = ls.pop ();
                output = output + current;
            }
            System.out.println ( "The reverse of your phrase is: \n" + output + ".\n" );
            System.out.println("Do you want to reverse another phrase \n Type 'y' for Yes or 'n' for No");
            answer=scan.nextLine().charAt(0);
        }
        while (answer=='y');
    }
    }

