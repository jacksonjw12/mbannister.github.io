package cardspackage;
/*
 * A class to represent a deck of cards.  Operations include
 * creating, shuffling and printing the deck as well as dealing cards.
 * Written by Kim Bruce, 2/04
 */

import java.util.Random;

public class Deck {

	protected CardInterface[] cards;	// cards in the deck
	protected int firstCard;	       	// slot for first available card
	
	// Create a deck of cards held in order
	public Deck(){
		cards = new CardInterface[52];
		reInit();
	}

	// Post: returns string representing remaining cards in deck.
	public String toString(){
		String result = "";
		for (int cardNo = firstCard; cardNo < 52; cardNo++){
			result = result + cards[cardNo] + "\n";
		}
		return result;
	}
		
	// POST: Cards in the deck have been shuffled
	public void shuffle(){
		Random randomGen = new Random();	// random number generator
		int newSlot;   	// Location with which to swap current CardInterface.
		
		for (int cardNo = firstCard; cardNo < 52; cardNo++){
			newSlot = randomGen.nextInt(52 - firstCard) 
							+ firstCard;
			// swap card with one in newSlot
			CardInterface swapCard = cards[cardNo];
			cards[cardNo] = cards[newSlot];
			cards[newSlot] = swapCard;
		}
	}
	
	// POST:  deck is reinitialized with all 52 cards in order
	public void reInit(){
		int cardNo = 0;
		for(CardInterface.Suit theSuit : CardInterface.Suit.values())
			for(CardInterface.Rank theRank: CardInterface.Rank.values()){
				cards[cardNo] = new Card(theRank,theSuit);
				cardNo++;
			}
		firstCard = 0;
	}
	
	// Deal out (print) first "numCards" in deck
	// Pre:  numCards <= number of cards in deck
	// @return array holding next "numCards" in "deck"
	public CardInterface[] deal(int numCards){
		CardInterface[] dealtCards = new CardInterface[numCards];
		int newFirst = firstCard + numCards;
		if (newFirst > 52) 
			newFirst = 52;
		
		for (int cardNum = 0; cardNum < numCards; cardNum++){
			dealtCards[cardNum]=cards[firstCard];
			firstCard++;
		}
		return dealtCards;
	}
		
	// Program to test deck class
	public static void main(String args[]) {
		Deck deck = new Deck();
		System.out.println("Original deck of cards:\n\n"+deck);
		deck.shuffle();
		System.out.println("Shuffled deck\n\n" + deck);
		CardInterface[] dealtCards = deck.deal(5);
		System.out.println("Just dealt: \n");
		for(int count = 0; count < 5; count++)
			System.out.println(dealtCards[count]);
		System.out.println("\nAfter dealing 5 cards the deck is now:\n\n"+
				   deck);
		deck.reInit();
		System.out.println("Restored deck of cards:\n\n"+deck);
	}
}
