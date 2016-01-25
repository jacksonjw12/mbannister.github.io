package cardspackage;

// A playing card interface
// Note that the cards are immutable
// Written by: Kim Bruce, 2/04

public interface CardInterface{
	
	// enum constants
	enum Suit {CLUBS, DIAMONDS, HEARTS, SPADES}
	
	enum Rank { TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT,
		NINE, TEN, JACK, QUEEN, KING, ACE}

	// @return suit of the card
	Suit getSuit();
	
	// @return rank of the card
	Rank getRank();
}
