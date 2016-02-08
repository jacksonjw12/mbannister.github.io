import java.util.*;

/**
 * @author dave kauchak, kevin coogan
 * @date 2/11/2010
 * @update 2/2/2012
 */
public class IteratorExamples {

	public static void main(String[] args){
		//arraylistIterator();
		//arraylistIteratorConcern();
		//arraylistIteratorConcern2();
		//arraylistIteratorConcern3();
		alphabetIterable();
	}
	
	public static void arraylistIterator(){
		ArrayList<Integer> list = new ArrayList<Integer>();
		
		for( int i = 10; i >= 0; i-- ){
			list.add(i);
		}
		
		Iterator<Integer> it = list.iterator();
		
		while( it.hasNext() ){
			System.out.println(it.next());
		}
		
	}
	
	public static void arraylistIteratorConcern(){
		ArrayList<Integer> list = new ArrayList<Integer>();
		
		for( int i = 10; i >= 0; i-- ){
			list.add(i);
		}
		
		Iterator<Integer> it1 = list.iterator();
		Iterator<Integer> it2 = list.iterator();

		System.out.println("it1:");
		System.out.println(it1.next());
		System.out.println(it1.next());
		System.out.println("it2:");
		System.out.println(it2.next());
		System.out.println(it2.next());
		System.out.println("it1:");
		System.out.println(it1.next());
		System.out.println(it1.next());
		System.out.println("it2:");
		System.out.println(it2.next());
		System.out.println(it2.next());
	}
	
	public static void arraylistIteratorConcern2(){
		ArrayList<Integer> list = new ArrayList<Integer>();
		
		for( int i = 10; i >= 0; i-- ){
			list.add(i);
		}
		
		Iterator<Integer> it = list.iterator();
		//System.out.println(it.next());
		
		list.add(1);
		System.out.println(it.next());
		
		System.out.println("Size: " + list.size());
	}
	
	public static void arraylistIteratorConcern3(){
		ArrayList<Integer> list = new ArrayList<Integer>();
		
		for( int i = 10; i >= 0; i-- ){
			list.add(i);
		}
		
		Iterator<Integer> it = list.iterator();
		System.out.println(it.next());
		//System.out.println(it.next());
		
		list.set(1, 50);
		System.out.println(it.next());
		
		System.out.println("size: " + list.size());
	}
	
	public static void alphabetIterable(){
		AlphabetSoup as = new AlphabetSoup(false);
				
		for( String s: as ){
			System.out.println(s);
		}
	}
	
	
	
	
	
	
	
	
	public static void arraylistIterable(){
		ArrayList<Integer> list = new ArrayList<Integer>();
		
		for( int i = 10; i >= 0; i-- ){
			list.add(i);
		}
		
		for( Integer i: list ){
			System.out.println(i);
		}
	}
}
