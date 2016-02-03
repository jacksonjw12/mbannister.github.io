
public class FastPower {
	public static void main(String argv[]) {
		int base = 2;
		int exponent = 16;
		System.out.println("fastPower(" + base + ", " + exponent + ") = " +
				fastPower(base, exponent));
	}
	
	public static int fastPower(int base, int exponent) {
		if(exponent == 0) {
			return 1;
		} else if(exponent % 2 == 1) {
			return base * fastPower(base, exponent - 1);
		} else {
			return fastPower(base * base, exponent/2);
		}
	}
}
