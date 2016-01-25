/**
 * Generic class representing an association of a key with a value
 * @author Duane Bailey
 * @version 2007
 * @param <K> Type of keys
 * @param <V> Type of value
 * Class takes types as parameters!
 */

public class Association<K, V> {

	private K theKey; // the key of the key-value pair
	private V theValue; // the value of the key-value pair
	/*
	 * Usage example: Association<String,Integer> personAttribute = 
	 *                    	new Association<String,Integer>("Age",34);
	 */

	/**
	 * @param key
	 *            is non-null value used to find the associated value
	 * @param value
	 *            is value associated with the key
	 * post: constructs a key-value pair
	 */
	public Association(K key, V value) {
		theKey = key;
		theValue = value;
	}

	/**
	 * @return value from association
	 */
	public V getValue() {
		return theValue;
	}

	/**
	 * @return returns key from association
	 */
	public K getKey() {
		return theKey;
	}

	/**
	 * @param value
	 *            is new value associated with current key in association
	 * @return value before update
	 * post: current key is now associated with new value
	 */
	public V setValue(V value) {
		V oldValue = theValue;
		theValue = value;
		return oldValue;
	}
	
	public static void main(String[] args) {
		Association<String,Integer> nameAgePair = 
			new Association<String,Integer>("Shezad",24);
		// Can't use primitive type as generic parameter, so must
		// use Integer instead of int.  Value 24 is "autoboxed" into
		// Integer value
		
		System.out.println(nameAgePair.getKey()+" is now "+nameAgePair.getValue()
				+" years old");
		
	}
}