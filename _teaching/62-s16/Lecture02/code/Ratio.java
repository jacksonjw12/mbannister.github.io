/**
 * @author duane a. bailey
 * @version $Id: Ratio.java,v 1.1 1997/07/20 12:37:00 bailey Exp bailey $
 *          modified 9/97 William Lenhart to add equals and toString modified
 *          2/98 Kim Bruce to keep ratio in lowest terms
 */

package fractions;
// an object for storing a fraction
public class Ratio {
	private int numerator; // numerator of ratio
	private int denominator; // denominator of ratio

	/**
	 * pre: bottom != 0
	 * @param top - numerator of new fraction
	 * @param bottom - denominator of new fraction
	 * @throws IllegalArgumentException -- if bottom is 0
	 * post: Creates new fraction equivalent to top/bottom 
	 */
	public Ratio(int top, int bottom) {
		if (bottom == 0) {
			throw new IllegalArgumentException("denominator can't be 0");
		} else if (bottom < 0) {
			bottom = -bottom;
			top = -top;
		}
		int reducer = gcd(bottom, top);
		numerator = top / reducer;
		denominator = bottom / reducer;
		assert numerator*bottom == top*denominator && 
				denominator > 0: 
			"reduced form should be equivalent to the original";
	}

	/**
	 * @param first 
	 * @param second -- values to find gcd of
	 * @return gcd of first and second.
	 */
	private int gcd(int first, int second) {
		int fst, snd; // reduced versions of first, second
		if ((first == 0) || (second == 0)) {
			return 1;
		} else {
			fst = Math.abs(first);
		}
		snd = Math.abs(second);
		int next = fst % snd; // indicates when done
		while (next != 0) {
			fst = snd;
			snd = next;
			next = (fst % snd);
		}
		assert first%snd == 0 && second%snd == 0:
			"gcd should be divisor of both first and second";
		return snd;
	}

	/**
	 * @return the numerator of the fraction
	 */
	public int getNumerator() {
		return numerator;
	}

	/**
	 * @return denominator of fraction
	 */
	public int getDenominator() {
		return denominator;
	}

	/**
	 * @param other -- another fraction
	 *  post: returns true if other and this fraction are equal
	 */
	// Note: Don't need cross product because fractions saved in reduced terms!
	public boolean equals(Object other) {
		if (other instanceof Ratio) {
			Ratio otherRatio = (Ratio) other;
			return (this.numerator == otherRatio.numerator) && 
				(this.denominator == otherRatio.denominator);
		} else {
			return false;
		}
	}

	// Should redefine hashcode, but ignore for now in course

	/**
	 *  @return a string representation of the fraction
	 */
	public String toString() {
		return numerator + "/" + denominator;
	}

	/**
	 * @return the real value equivalent to this rational
	 */
	public double value() {
		// assert false: "testing assertions";  // uncomment to see what happens when
											// assertion fails
		return (double) numerator / (double) denominator;
	}

	/**
	 * pre: other different from null
	 * @param other  fraction to be added to this
	 * @return sum of this and other
	 * @throws IllegalArgumentException if other is null
	 */
	// post: return new fraction --- the sum of this and other
	public Ratio add(Ratio other) {
		if (other == null) {
			throw new IllegalArgumentException("Can't add null to fraction");
		}
		return new Ratio(this.numerator * other.denominator + this.denominator
				* other.numerator, this.denominator * other.denominator);
	}

	// Try out class by generating some
	// rational numbers and sending messages
	public static void main(String[] args) {
		Ratio r = new Ratio(1, 1); // r == 1.0;
		r = new Ratio(1, 2); // r == 0.5;
		r = r.add(new Ratio(1, 4)); // r == 0.75

		System.out.println(); // skip a line
		System.out.println(r.value()); // 0.75 printed

		Ratio q = new Ratio(-9, -12);
		System.out.println("q = " + q);
		System.out.println("r = " + r);
		System.out.print("They are ");
		if (!q.equals(r)) {
			System.out.print("not ");
		}
		System.out.println("equal.");
		System.out.println(); // skip a line
		
		r = new Ratio(1,0);
	}
}
