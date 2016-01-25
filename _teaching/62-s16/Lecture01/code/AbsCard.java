package cardspackage;

/*
 * Abstract class containing code to be inherited by card classes
 * Created on Feb 9, 2004
 * @author kim
 *
 */
public abstract class AbsCard implements CardInterface {

	// @return suit of the card
	public abstract Suit getSuit();

	// @return rank of the card
	public abstract Rank getRank();
	
	// pre:  other is a non-null Card
	// @return whether this equals other
	public boolean equals(Object other) {
		if (other instanceof CardInterface) {
			CardInterface otherCard = (CardInterface) other;
			return (getRank() == otherCard.getRank()) 
				 && (getSuit() == otherCard.getSuit());
		} else {
			return false;
		}
	}
	

	// post:  returns a string representation of this card
	public String toString() {
		return getRank() + " of " + getSuit();
	}

}
