package cardspackage;

// An alternate playing card class
// Kim Bruce, 2/9/04

public class OtherCard extends AbsCard {
	
	protected int number;		// single letter encoding of card
	
	// post:  Constructs a card with default value "Ace of Spades"
	public OtherCard() {
		this(Rank.ACE,Suit.SPADES);
	}
	
	// post:  Constructs a card of the given type
	public OtherCard(Rank theRank, Suit theSuit) {
		number = 13*(theSuit.ordinal()) + theRank.ordinal();
	}
	
	// @return hash code for this card
	public int hashCode() {
		return number;
	}
	
	// @return suit of card
	public Suit getSuit() {
		return Suit.values()[number / 13];
	}
	
	// @return rank of card
	public Rank getRank() {
		return Rank.values()[number % 13];
	}

	// Test Card class
	public static void main(String args[]) {
		// Create some cards
		CardInterface first = new OtherCard(Rank.THREE,Suit.DIAMONDS);
		CardInterface second = new OtherCard();
		
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
		// for loop - don't print out 5th element
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
