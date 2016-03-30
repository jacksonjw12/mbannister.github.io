public class BoundedBuffer {
	protected int MaxBuffSize;

	private int[] buffer;

	private int numSlots = 0;
	private int takeOut = 0, putIn = 0;
	private int count=0;

	public BoundedBuffer(int numSlots) {
		if(numSlots < 0) {
			throw new IllegalArgumentException("numSlots <= 0");
		}
		this.numSlots = numSlots;
		buffer = new int[numSlots];
	}

	synchronized public void put(int value) throws InterruptedException {
		while (count == numSlots){
			wait();
		}
		buffer[putIn] = value;
		putIn = (putIn + 1) % numSlots;
		count++;
		notifyAll();
	}

	synchronized public int get() throws InterruptedException {
		int value;
		while (count == 0){
			wait();
		}
		value = buffer[takeOut];
		takeOut = (takeOut + 1) % numSlots;
		count--;
		notifyAll();
		return value;
	}
}
