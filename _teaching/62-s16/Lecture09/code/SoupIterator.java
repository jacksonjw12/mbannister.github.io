import java.util.Iterator;
import java.util.NoSuchElementException;

/**
 * Iterator for the AlphabetSoup class
 * 
 * @author dave
 * @date 2/11/2010
 */
public class SoupIterator implements Iterator<String>{

	private AlphabetSoup soup;
	private int currentIndex = 0;
	private int soupSize;
	
	public SoupIterator(AlphabetSoup soup){
		this.soup = soup;
		soupSize = soup.size();
	}

	public boolean hasNext() {
		return currentIndex < soupSize;
	}

	public String next() {
		if( !hasNext() ){
			throw new NoSuchElementException();
		}
		
		currentIndex++;
		return soup.get(currentIndex - 1);
	}

	public void remove() {
		// we'll ignore, since it's optional
	}
	
	
}
