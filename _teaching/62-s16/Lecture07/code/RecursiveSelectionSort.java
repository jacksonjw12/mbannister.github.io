/** 
    File: SelectionSort.java
    6/1/93: Ben Whaley, Created
    2/2/97: Kim Bruce, Ported to Java
    
    A class to implement the selection sort.  It follows closely the insertion sort           
    implementation given in Gabrini & Kurtz.   							
*/

public class RecursiveSelectionSort implements SortInterface
{

    /**
       @post elementArray is sorted into increasing order  
    */
    public void sort(int[] elementArray)
    {
	selectionSort(elementArray,elementArray.length-1);
    }

    
    /**
       @pre endIndex is a legal index into elementArray
       @post  elementArray[0..endIndex] is sorted in increasing order
    */
    void selectionSort(int[] array, int endIndex) {
	if (endIndex > 0 ) {
	    // find largest element in array[0...endIndex]
	    int largest = indexOfLargest(array, endIndex);
	    
	    // move largest element to index endIndex
	    swap(array, largest, endIndex);
	    
	    // sort everything in the array before endIndex
	    selectionSort(array, endIndex - 1);
	}
    }
    
    /**
     * Return index of largest number in array between
     * 0 and endIndex (inclusive).
     *
     * @pre endIndex must be valid index for array
     * @returns index of largest value in range 0 - endIndex
     */
    private int indexOfLargest(int[] array, int endIndex) {
	int largeIndex = 0;
	for (int i = 1; i <= endIndex; i++) {
	    if (array[i] > array[largeIndex]) {
	        largeIndex = i;
	    }
	}
	return largeIndex;
    }
	  
    /**
     * Swap element in array[firstIndex] and array[secondIndex]
     * @param array array of integers
     * @param firstIndex index to be swapped
     * @param secondIndex index to be swapped
     */
    private void swap(int[] array, int firstIndex, int secondIndex) {
	int temp = array[firstIndex];
	array[firstIndex] = array[secondIndex];
	array[secondIndex] = temp;
    }
    
}