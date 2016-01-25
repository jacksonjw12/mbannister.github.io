package cardspackage;
// A playing card
// Implementation (c) 1997 William Lenhart

// Annotated with discussion of Java syntax
public class Card extends AbsCard {
	
	// instance variables
	protected final Suit theSuit;	// The suit of the card: CLUBS..SPADES
	protected final Rank theRank;	// The rank of the card: TWO..ACE
	
	// Constructors
	
	// Always have a no-operand constructor
	// This one merely invokes the two-argument constructor, using "this" syntax
	// post:  Constructs a card with default value "Ace of Spades"
	public Card() {
		this(Rank.ACE,Suit.SPADES);
	}
	
	// This version of the constructor does all of the work
	// post:  Constructs a card of the given type
	public Card(Rank aRank, Suit aSuit) {
		theSuit = aSuit;
		theRank = aRank;
	}
	
	// Having this method allows Cards to be used in certain data structures
	// For now, just try to return different values for different cards
	// This returns a number in the range 0..51;  different cards yield different values
	// @return hash code for this card
	public int hashCode() {
		return 13*(theSuit.ordinal()) + theRank.ordinal();
	}
	
	// @return suit of card
	public Suit getSuit() {
		return theSuit;
	}
	
	// @return rank of card
	public Rank getRank() {
		return theRank;
	}
	
	// If a class contains a main method, that method can be run when the class is compiled
	// I always have one, which I use for testing the class
	// Test Card class
	public static void main(String args[]) {
		// Create some cards
		CardInterface first = new Card(Rank.THREE,Suit.DIAMONDS);
		CardInterface second = new Card();
		
		System.out.println();
		System.out.println(first);
		System.out.println(second);
		System.out.println();
		
		// Note:  ! is the negation operator
		System.out.print("These cards are ");
		if(!first.equals(second))
			System.out.print("not ");
		System.out.println("equal");
		System.out.println();
		
		// Create an array of cards
		// Note syntax for array declaration
		CardInterface[] hand = new CardInterface[5];
		hand[0] = new Card(Rank.ACE,Suit.HEARTS);
		hand[1] = new Card(Rank.KING,Suit.HEARTS);
		hand[2] = new Card(Rank.QUEEN,Suit.HEARTS);
		hand[3] = new Card(Rank.JACK,Suit.HEARTS);
		hand[4] = new Card(Rank.TEN,Suit.HEARTS);
		
		System.out.println("First four cards in the hand:");
		// for loop
		// Note: declaration in for loop; ++ is the "add 1" operator
		for(int i=0;i<4;i++) {
			System.out.print(hand[i] + ", ");
		}
		System.out.println();
		System.out.println("Printing all cards again:");

		// print again using new Java "for" loop
		for(CardInterface card: hand) {
			System.out.print(card + ", ");
		}

		System.out.println();
		System.out.print("The last card is: ");
		System.out.println(hand[4]);
	}

}
