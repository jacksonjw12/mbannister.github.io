import java.util.Iterator;
import java.util.ArrayList;

/**
 * Iterable example
 * 
 * @author dave
 * @date 2/11/2010
 */
public class AlphabetSoup  implements Iterable<String>{
	private ArrayList<String> soup = new ArrayList<String>();
	
	public AlphabetSoup(boolean capitalized){
		if( capitalized ){
			for( char c = 'A'; c <= 'Z'; c++ ){
				soup.add(Character.toString(c));
			}
		}else{
			for( char c = 'a'; c <= 'z'; c++ ){
				soup.add(Character.toString(c));
			}
		}
	}

	public Iterator<String> iterator(){
		return new SoupIterator(this);
	}
	
	public String get(int i){
		return soup.get(i);
	}
	
	public void remove(int i){
		soup.remove(i);
	}
	
	public int size(){
		return soup.size();
	}
}
