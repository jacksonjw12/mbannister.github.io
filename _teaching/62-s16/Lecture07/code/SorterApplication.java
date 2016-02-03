package SortingAlgorithms;

import java.util.Random;

public class SorterApplication {
	/**
	 * Prints array values to System.out 
	 * @param array array of integers
	 */
	private static void printArray(int[] array) {
		for(int i = 0; i < array.length; ++i) {
			System.out.print(array[i] + " ");
		}
		System.out.println();
	}

	public static void main(String[] args) {
		int[] array = new int[8];
		Random rand = new Random();
		for(int i = 0; i < array.length; ++i ) {
			array[i] = rand.nextInt(50);
		}
		printArray(array);
		
		SortInterface sorter = new SelectionSortIterative();
		sorter.sort(array);
		printArray(array);
		
	}
}
