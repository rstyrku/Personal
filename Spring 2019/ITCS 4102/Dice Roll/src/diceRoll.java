import java.util.Scanner;

public class diceRoll {

    public static void main(String[] args) {

        //Print out Title of App.
        System.out.println("You chose Dice Roll\n");

        //Roll Random Number and Store in Variable.
        int roll = (int)(Math.random()*6) +1;

        //Ask User to Guess whether even or odd.
        System.out.println("Guess if even or odd");

        //Read input and store to variable.
        Scanner keyboard = new Scanner(System.in);
        String guess = keyboard.nextLine();

        //Initialize variable to store whether guess was even or odd in integer form.
        int guessint = -1;

        //Store value of whether roll was even or odd in variable
        int answer = roll % 2;

        //If Statements to set value of the guessInt based on input.
        if (guess.equals("even")){
            guessint = 0;
        }
        else if (guess.equals("odd")){
            guessint = 1;
        }

        //If Statement to compare roll and answer and print output.
        if (answer == guessint) {
            System.out.println("The Number Was: " + roll);
            System.out.println("You Guessed Correctly");
        }
        else {
            System.out.println("The Number Was: " + roll);
            System.out.println("You Guessed Incorrectly");
        }
    }
}
