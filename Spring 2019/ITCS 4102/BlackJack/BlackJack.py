#start of code
import random


def faceCard(card):
    if(card == 1):
        card = "Ace"
    if(card == 11):
        card = "Jack"
    if(card == 12):
        card = "Queen"
    if(card == 13):
        card = "King"
    return card


def generateDeck():
    deck = []
    for i in range(1, 53):
        if(i <= 13):
            j = 14-i
            j = faceCard(j)
            # card=str(j)+" of Spades"
        if(14 <= i <= 26):
            j = 27-i
            j = faceCard(j)
            # card=str(j)+" of Hearts"
        if(27 <= i <= 39):
            j = 40-i
            j = faceCard(j)
            # card=str(j)+" of Clubs"
        if(40 <= i < 52):
            j = 53-i
            j = faceCard(j)
            # card=str(j)+" of Diamonds"
        card = j
        print(card)
        deck.append(card)
    return deck


def deal(deck):
    hand = []
    for i in range(2):
        i
        random.shuffle(deck)
        card = deck.pop()
        hand.append(card)
    return hand

def calculate(hand):
    value=0
    for card in hand:
        if card == "Jack" or card == "Queen" or card == "King":
            value+= 10
        elif card == "Ace":
            if value >= 11:
                value+=1
            else:
                value+= 11
        else:
            value += card
    return value

def hit(hand):
    print("deal")
    return hand

def play():
    choice = 0
    deck = generateDeck()
    dealer = deal(deck)
    player = deal(deck)
    playerValue = calculate(player)
    dealerValue = calculate(dealer)
    print("Lets play blackjack!")
    while choice != "S":
        print("dealer Has a  " + str(dealer[0]))
        print(player)
        print("player Hand value "+str(playerValue))
        choice = input("Do you want to [H]it, [S]tand").upper()
        if choice == "H":
            player = hit(player)
            playerValue = calculate(player)
        if choice == "S":
            #Dealer hits
            print("Dealer has "+str(dealerValue))
            if(dealerValue>=playerValue):
                print("You Lose")
            else:
                print("You Win!")

play()
#end of code


"""Hey guys,

After I look back to my previous lab texts, I found the following code similar to our project. Please take a look to see if it may be helpfull.



/**
* This project has goal to create a solution designed to play Blackjack.
* This class is created to hold three fields, their values, three getMethode,
* toStrig() method.
*
* @author Essi Kpoedzu
* @version 12/07/2017
*/
public class Card//the card class
{
    private int value; //holds data for the value of the card

private String suit; //holds data for the suit of the card

private String face; //holds data for the face of the card

/**
*
* This constructor takes three values for the two fields.
* @param value the face value of the card , the number on the card except Aces that have a value of 1 or 11
* @param suit the suit card belongs to e.g. Diamonds, spades,Clubs, hearts.
* @param face Cards with faces on them e.g. Jack,King, Queen.
*/
//Constructor that takes three values for the three fields
public Card(int inValue, String inSuit, String inFace)

{

    value = inValue;//value of value field

suit = inSuit;//value aof suit field

face = inFace;//value of face field

}
/**
* This is the copy constructor that allows the Deck class to return a copy of the card at the top of the deck
* @param other This constructor takes in another card as its parameter and copies it.
*/
public Card (Card other)

{

    this.value = other.value;

this.suit = other.suit;

this.face = other.face;

}

/**
* This is the get method for the value field
* @return this returns the value of the card
*/
public int getValue()//to call getMethod()

{

return value;//to return the value of the card

}

public String getSuit()//getMethod() to return variable

{

return suit;//return type

}
/**
* This is the get method for the face field
* @return this returns the face of the card
*/
public String getFace()//getMethod() to return the variable

{

return face;//to returnn the face of the card

}
/**
* This is the toString method of the card class
    * @return This returns a textual representation of the card created.
    */
    public String toString()//allow the user to call toString() method

    {

    return "Value: " + value + "\tSuit: " + suit + "\tFace: " + face;//to return the textual representation of the string

    }
    /**
    * This method uses the value of the card to determine the ordering.
                                                              * @param obj It takes in another card object as its parameter
                                                                                                                  * @return returns an integer for whether values are the same, greater or lesser than each other
    */
    public int compareTo(Card other)//to call CompareTo() method

    {

        int result;//to return the integer as return type

    if (this.value > other.value){//condition

    result = 1;
    return result;//return type
    }

    else if (this.value < other.value){

    result = -1;
    return result;
    }
    else{

    result = 0;

    return result;
    }
    }
    }
    //end
      /**
    * This is created to have fields with specific references
    *
    * Essi Kpoedzu
    * @version 12/07/2017
    */
    public class Deck// the deck class

    {
    /**
    * This the constructor which will create the array of Cards and an int
                                                                       * //which holds the subscript of the Card at the top ofthe deck.
                                                                                                                                  */
                                                                                                                                  // an array of Cards

                                                                                                                                                 // An int which holds the subscript of the Card at the top of the deck.
        private int cardSubscript;

    //One constructor to create the array
                                    //Initialize
                                    /**
    * This the constructor which will create the array.
                                                 */
                                                 private static String[] faces = {"Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
    private static String[] suits = {"Clubs","Diamonds","Hearts","Spades"};
    private static Integer[] values = {11,2,3,4,5,6,7,8,9,10,10,10,10};
    int valCount =0;
    Card[] cardArray;;//represents a deck of cards
    public Deck() {

        cardSubscript = 0;
    // create the array first
                        // cardArray[0] = new Card(11, "Ace", "Spades");
    //   public Card(int value,String suit,String face )
    int card =0;
    cardArray = new Card[52];

    for(int suit=0; suit<4; suit++){
    for(int value=0; value<13; value++){
    cardArray[card] = new Card(values[value],faces[value],suits[suit]);
    card++;
    }
    }

    }

    /**
    * This is the method getTopCard( ) which returns a copy of the Card that is
    * at the top of the array.
    *
    * @return a copy of the Card that is at the top of the array.
    */
public Card getTopCard()// getTopCard() method
{
    Card card = cardArray[cardSubscript];
cardSubscript++;
return card;// a copy of the Card

}

public int getCardSubscript() {

return cardSubscript;//to return a copy of the Card

}

/**
* This method is called shuffle( ) it shuffles the array of Cards. To
                                                            * shuffle, generate random numbers and use these to exchange array
                                                                                                                         * elements. Exchange 1000 times in this method.
                                                                                                                                                                 *
                                                                                                                                                                 */
                                                                                                                                                                 public void shuffle()// to get shuffle() method
{
for (int j = 0; j < 1000; j++)// to generate random numbers
{
    int ranPos1 = (int) (Math.random() * (cardArray.length));

int ranPos2 = (int) (Math.random() * (cardArray.length));
Card temporalLocation = cardArray[ranPos1];
cardArray[ranPos1] = cardArray[ranPos2];
cardArray[ranPos2] = temporalLocation;

}
}

/**
* This method prints the arrays of cards at the start of the game
                                                             *
                                                             * @return a textual representation of the deck.
*/

public String toString() {
                         //intialize the String
String str = "";

for (int j = 0; j < cardArray.length; j++) {
    str += cardArray[j].toString();
}
return str;
//to return a textual represensentive of to ToString() method
}

}




import java.util.Scanner;
/**
*  This class is created to hold the game logic, to run, and  to test the game.
*
* @author Essi Kpoedzu
*
* @version 12/07/2017
*/
public class Game21{// the driver class

    /**
    * This is a static method that calculates the points of card hand
    *
    * @param cards
    * as array of cards
    * @param numCards
    * @return A total of the points a card hand has.
    */
    //static int CalCulateCards(Card[] cards, int numCards)
    // {
        static int CalCulateCards(Card[] cards, int numCards)
    {
    // declare and initialize the variables
                                  //int numCards;
    int total = 0;
    for (int i = 0; i < numCards; i++) {
        total += cards[i].getValue();
    }
    return total;//to return the total value of the cards
    }

    /**
    * This is a static method that calculates the points of card hand
                                                                 *
                                                                 * @param cards
                                                                          * as array of cards
                                                                                        * @param numCards
                                                                                                 * @return A total of the points a card hand has.
    */
    static void DisplayHand(Card[] cards, int numCards) {
        String str = "[";
    for (int i = 0; i < numCards; i++) {
        str += cards[i].toString() + ", ";
    }
    str += "]";
    System.out.println(str);
    }

    /**
    * The class where execution of the game starts
    *
    * @param args
    */
    public static void main (String [] args) {

                                             //create a Scanner for keyboard input
    Scanner input = new Scanner(System.in);

    //create one Deck instance
    Deck d1 = new Deck();
    Card[] playerCards = new Card[10];
    Card[] dealerCards = new Card[10];
    // declare and initialize the variables
    int STAND_VALUE = 17; //declare reference variable for dealer's stand value

    int DHV = 0; //holds data for the dealer's current hand value

    int PHV = 0; //holds data for the player's current hand value

    int FHV_dealer = 0; //holds data for the dealer's final hand value after standing

    int FHV_player = 0; //holds data for the player's final hand value after standing

    char deal = 'd'; //holds data for whether the player decides to deal another card

    char again = 'a'; //holds data for whether the player decides to play another hand

    int numWins_dealer = 0; //holds data for the number of hands won by the dealer

    int numWins_player = 0; //holds data for the number of hands won by the player

    Card c1, c2, c3, p1, p2, p3; //declare Card objects for the dealer's cards (c1,c2,c3) and player's cards (p1,p2,p3)

    System.out.println("LET'S PLAY BACKJACK!");

    System.out.println("Play again");

    while (again == 'a'){ //while loop for the player to play another hand

//To call the shuffle method for each
    //public void shuffle(int n)
//{
    d1.shuffle();

/** Each playeris dealt two cards to start*/
                                     //deal and print two cards for the computer (dealer)
System.out.println("=======DEALER=======");

c1 = d1.getTopCard(); //first card of the dealer

c2 = d1.getTopCard();// second card of the dealer

System.out.println(c1);//to print the dealer first card

System.out.println(c2);// to print the dealer second card

DHV = c1.getValue() + c2.getValue(); //calculate the dealer's current hand value

//determine value of Ace card

if (DHV < 12 && c1.getFace() == "Ace") //Ace can have value of 1 or 11 depending on the hand value

{

DHV = 11 + c2.getValue();

}

else if (DHV < 12 && c2.getFace() == "Ace")

{

DHV = 11 + c1.getValue();

}

System.out.println("HAND VALUE: " + DHV); //print the dealer's current hand value

//hit 21 first try

if (DHV == 21)

{

    System.out.println("BLACKJACK!"); //print "BLACKJACK" if dealer gets 21

}

System.out.println(" ");

//deal and print two cards for the player
    System.out.println("======PLAYER 1====== ");

p1 = d1.getTopCard(); // to deal the first card

p2 = d1.getTopCard();// to deal the second card

System.out.println(p1);// to print the first card

System.out.println(p2);//to print the second card

PHV = p1.getValue() + p2.getValue(); //calculate the player's current hand value

//determine value of Ace card

if (PHV < 12 && p1.getFace() == "Ace") //Ace can have value of 1 or 11

{

    PHV = 11 + p2.getValue();// condition

}

else if (PHV < 12 && p2.getFace() == "Ace")

{

    PHV = 11 + p1.getValue();//condition

}

System.out.println("HAND VALUE: " + PHV); //print the player's current hand value

//hit 21 first try

if (PHV == 21)//condition

{

    System.out.println("BLACKJACK!"); //print "BLACKJACK" if dealer gets 21

}

System.out.println(" ");

System.out.print("Press d to deal another card, or any other key to stand. "); //allow user to deal another card

deal = input.next().charAt(0);

input.nextLine();//to print in the next line

//game logic and player turn

while (deal == 'd' && PHV < 21) //while the player's current hand value is still less than 21,

{ //the player can continue to deal another card if they choose

p3 = d1.getTopCard();

System.out.println(p3);

PHV = PHV + p3.getValue(); //update player's hand value after a new card is dealt

//determine value of Ace card

if (PHV < 12 && p3.getFace() == "Ace")

{

    PHV = 11 + p2.getValue() + p1.getValue();

}

System.out.println("NEW HAND VALUE: " + PHV); //print player's updated hand value

FHV_player = PHV;

if (PHV < 21)

{

    System.out.print("Press d to deal another card, or any other key to stand. ");

deal = input.next().charAt(0);

input.nextLine();

}

else if (PHV > 21)

{

    System.out.println("PLAYER BUST!"); //if player deals another card and their hand value exceeds 21,

} //player busts

}

FHV_player = PHV; //assign the player's updated hand value to their final hand value after

System.out.println(" "); //deciding to deal no more cards (stand)

                                                    // dealer/computer turn
                                                                       //check if dealer stands

System.out.println("====NEW DEALER HAND====");

if (DHV < STAND_VALUE) //while the dealer's hand value is less than the stand value, the dealer

{ //must be dealt another card from the deck

do{

    c3 = d1.getTopCard();

System.out.println(c3);

DHV = DHV + c3.getValue(); //calculate and print the dealer's updated hand value

System.out.println("NEW HAND VALUE: " + DHV);

} while(DHV < STAND_VALUE);

FHV_dealer = DHV; //assign the dealer's updated hand value to their final hand value after

//no more cards can be dealt

if (DHV > 21)

{

    System.out.println("DEALER BUST!"); //if the dealer is dealt another card and their hand value exceeds 21,

} //the dealer busts

}

else

{

FHV_dealer = DHV;

System.out.println("DEALER STANDS AT: " + FHV_dealer); //if dealer's initial two cards has a hand value that exceeds the

} //stand value, the dealer must stand

System.out.println(" ");

System.out.println("PLAYER FINAL HAND VALUE: " + FHV_player); //print the final hand values of both the player and dealer

System.out.println("DEALER FINAL HAND VALUE: " + FHV_dealer);

//determine winner and accumulate number of wins by each case

if (FHV_dealer > 21)

{

System.out.println("PLAYER WINS!"); //if the dealer busts, the player wins

numWins_player++;

}

else if (FHV_player > 21)

{

System.out.println("DEALER WINS!"); //if the player busts, the dealer wins

numWins_dealer++;//dealer score

}

else if (FHV_dealer < FHV_player)// win condition

{

System.out.println("PLAYER WINS!"); //if the player's hand value is closer to 21 than the dealer's,

numWins_player++; //the player wins

}

else if (FHV_player < FHV_dealer)

{

System.out.println("DEALER WINS!"); //if the dealer's hand value is closer to 21 than the player's,

numWins_dealer++; //the dealer wins

}

else if (FHV_dealer > 21 && FHV_player > 21) //if both the dealer and player bust, neither win

{

System.out.println("NO WINNER DETERMINED");// both have the same point

}

else //if any other scenario (i.e. both the dealer and player tie at 21,

{ //neither win

System.out.println("NO WINNER DETERMINED"); // both have the same point

}

System.out.println(" ");

System.out.println("======SCOREBOARD======"); //display running total of hands won by the dealer and player

System.out.println("DEALER: " + numWins_dealer);

System.out.println("PLAYER: " + numWins_player);

System.out.println(" ");

System.out.print("Press a to play another hand."); //allow player to play another hand

again = input.next().charAt(0);

input.nextLine();

System.out.println(" ");
System.out.println(" ");
System.out.println("GOODBYE!"); //display message if player quits the game
}//end main

}//end of class definition
    }


Fully functional? Blackjack application with GUI  //added split and reset

import random
import tkinter
from tkinter import *

global deck,player,dealer,playerValue,dealerValue,splitValue,split
m=tkinter.Tk()

def faceCard(card):
    if(card == 1):
        card = "Ace"
    if(card == 11):
        card = "Jack"
    if(card == 12):
        card = "Queen"
    if(card == 13):
        card = "King"
    return card
def generateDeck():
    deck = []
    for i in range(1, 53):
        if(i <= 13):
            j = 14-i
            j = faceCard(j)
            # card=str(j)+" of Spades"
        if(14 <= i <= 26):
            j = 27-i
            j = faceCard(j)
            # card=str(j)+" of Hearts"
        if(27 <= i <= 39):
            j = 40-i
            j = faceCard(j)
            # card=str(j)+" of Clubs"
        if(40 <= i < 52):
            j = 53-i
            j = faceCard(j)
            # card=str(j)+" of Diamonds"
        card = j
        print(card)
        deck.append(card)
    return deck
def deal(deck):
    hand = []
    for i in range(2):
        random.shuffle(deck)
        card = deck.pop()
        hand.append(card)
    return hand
def calculate(hand):
    value=0
    for card in hand:
        if card == "Jack" or card == "Queen" or card == "King":
            value+= 10
        elif card == "Ace":
            if value >= 11:
                value+=1
            else:
                value+= 11
        else:
            value += card
    return value
def hitPlayer():
    print("deal")
    random.shuffle(deck)
    card = deck.pop()
    player.append(card)
    player_label.config(text='Your hand: ' +str(player))
    global playerValue
    playerValue=calculate(player)
    playerValue_label.config(text='Value: '+str(playerValue))
    if(playerValue>21):
        playerValue_label.config(text='BUST')
        buttonH.config(state=DISABLED)
        print(splitValue)
        if(len(split)==0 or splitValue>21):
            Winner()


def hitDealer(deck):
    print("deal")
    random.shuffle(deck)
    card = deck.pop()
    dealer.append(card)

def standPlayer():
    print('stand')
    buttonH.config(state=DISABLED)

    global dealerValue
    dealerValue = calculate(dealer)
    while(dealerValue<17):
        dealer_label.config(text='Dealer hand: '+str(dealer)+'\nDealer Value: '+str(dealerValue))
        if(dealerValue<17):
            hitDealer(deck)
            dealerValue=calculate(dealer)
    dealer_label.config(text='Dealer hand: '+str(dealer)+'\nDealer Value: '+str(dealerValue))
    if(dealerValue>21):
        dealer_label.config(text='Dealer hand: '+str(dealer)+'\nDealer Value: BUST')
    Winner()
    if(len(split)>0):
        splitWinner()

def hitSplit():
    print('splithit')
    random.shuffle(deck)
    card = deck.pop()
    split.append(card)
    split_label.config(text='Your split: ' +str(split))
    global splitValue
    splitValue=calculate(split)
    splitValue_label.config(text='Split Value: '+str(splitValue))
    if(splitValue>21):
        splitValue_label.config(text='BUST')
        buttonSp.config(state=DISABLED)
        if(playerValue>21):
            Winner()
            splitWinner()

def splitPlayer():
    print('split')
    split.append(player[1])
    random.shuffle(deck)
    card = deck.pop()
    player.remove(player[1])
    player.append(card)
    card2 = deck.pop()
    split.append(card2)
    global splitValue
    splitValue=calculate(split)
    global playerValue
    playerValue=calculate(player)
    if(splitValue == 21):
        splitWinner()
    player_label.config(text='Your hand: ' +str(player))
    playerValue_label.config(text='Value: '+str(playerValue))
    split_label.config(text='Your split: ' +str(split))
    splitValue_label.config(text='Split value: '+str(splitValue))
    buttonSp.config(text='Hit Split' ,command=hitSplit)


def Winner():
    buttonH.config(state=DISABLED)
    buttonSp.config(state=DISABLED)
    dealerValue = calculate(dealer)
    playerValue = calculate(player)
    if(playerValue==21 and len(player)==2):
        winner_label.config(text='Blackjack! You Win!')
    elif(dealerValue==21 and len(dealer)==2):
        winner_label.config(text='Blackjack! You Lose!')
    elif(playerValue>21):
        winner_label.config(text='You Lose')
    elif(dealerValue>21):
        winner_label.config(text='You Win!')
    elif(playerValue==dealerValue):
        winner_label.config(text='You Draw')
    elif(playerValue>dealerValue):
        winner_label.config(text='You Win!')
    elif(dealerValue>playerValue):
        winner_label.config(text='You Lose')

def splitWinner():
    buttonH.config(state=DISABLED)
    buttonSp.config(state=DISABLED)
    dealerValue = calculate(dealer)
    splitValue = calculate(split)
    if(splitValue==21 and len(split)==2):
        splitWinner_label.config(text='Blackjack! Your split Wins!')
    elif(dealerValue==21 and len(dealer)==2):
        splitWinner_label.config(text='Blackjack! You Lose!')
    elif(splitValue>21):
        splitWinner_label.config(text='Your split Loses')
    elif(dealerValue>21):
        splitWinner_label.config(text='Your split Wins!')
    elif(splitValue==dealerValue):
        splitWinner_label.config(text='Your split Draws')
    elif(splitValue>dealerValue):
        splitWinner_label.config(text='You split Wins!')
    elif(dealerValue>splitValue):
        splitWinner_label.config(text='You split Loses')
def reset():
    global deck
    deck = generateDeck()
    global player
    global dealer
    global split
    split.clear()
    player = deal(deck)
    dealer= deal(deck)
    playerValue = calculate(player)
    dealerValue = calculate(dealer)
    if(playerValue==21):
        Winner()
    if(dealerValue==21):
        Winner()
    m.title('BlackJack')
    dealer_label.config(text='dealer has a: '+str(dealer[0]))
    player_label.config(text='Your hand: ' +str(player))
    playerValue_label.config(text='Value: '+str(playerValue))
    buttonSp.config(text='Split',command = splitPlayer,state = DISABLED)
    split_label.config(text='')
    splitValue_label.config(text='')
    winner_label.config(text='')
    splitWinner_label.config(text='')
    if(player[0] == player[1]):
        buttonSp.config(state = ACTIVE)
    buttonH.config(state=ACTIVE)
    buttonS.config(state=ACTIVE)


deck = generateDeck()
#player = deal(deck)
player = [2,2]
split=[]
dealer = deal(deck)
playerValue = calculate(player)
dealerValue = calculate(dealer)
if(playerValue==21):
    Winner()
if(dealerValue==21):
    Winner()
m.title('BlackJack')
messageVar = Message(m, text = 'Lets Play BlackJack!',width=300)
dealer_label = Label(m,text='dealer has a: '+str(dealer[0]))
player_label =Label(m,text='Your hand: ' +str(player))
playerValue_label=Label(m,text='Value: '+str(playerValue))
split_label=Label(m,text='')
splitValue_label=Label(m,text='')
winner_label=Label(m,text='')
splitWinner_label=Label(m,text='')
messageVar.pack()
dealer_label.pack()
player_label.pack()
playerValue_label.pack()
split_label.pack()
splitValue_label.pack()
winner_label.pack()
splitWinner_label.pack()
w = Canvas(m, width=400, height=300)
w.pack()
button = tkinter.Button(m, text='Restart', width=20, command=reset)
buttonSp = tkinter.Button(m, text='Split', width=20, command = splitPlayer,state = DISABLED)
if(player[0] == player[1]):
    buttonSp.config(state = ACTIVE)
buttonH = tkinter.Button(m, text='Hit', width=20, command=hitPlayer)
buttonS = tkinter.Button(m, text='Stand', width=20, command=standPlayer)
button.pack(side=LEFT)
buttonSp.pack(side=LEFT)
buttonH.pack(side=LEFT)
buttonS.pack(side=LEFT)
m.mainloop()
"""
