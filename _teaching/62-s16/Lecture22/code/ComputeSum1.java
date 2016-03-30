public class ComputeSum {

	public static int sumParallel(int[] arr) {
		int len = arr.length;
		int ans = 0;
		SumThread[] ts = new SumThread[4];
		for (int i = 0; i < 4; i++) {// do parallel computations
			ts[i] = new SumThread(arr, i * len / 4, (i + 1) * len / 4);
			ts[i].start(); // start not run
		}

		try {
			for (int i = 0; i < 4; i++) { // combine results
				ts[i].join(); // wait for helper to finish!
				ans += ts[i].getAns();
			}
			return ans;
		} catch (InterruptedException exc) {
			System.out.println("Execution interrupted");
			return -1;
		}
	}
	
	public static int sum(int[] arr) {
		int len = arr.length;
		int ans = 0;
		for (int i = 0; i < len; i++) {// do parallel computations
			ans = ans + arr[i];
		}
		return ans;
	}


	public static final void main(String[] args) {
		final int SIZE = 8000;
		int[] testArray = new int[SIZE];
		for (int count = 1; count < SIZE; count++) {
			testArray[count] = count;
		}
		int answer  = sum(testArray);
		answer = sumParallel(testArray);
		StopWatch sw = new StopWatch();
		sw.start();
		answer = sumParallel(testArray);
		sw.stop();
		System.out.println(answer + " takes parallel time "+sw.getTime()/1000);
/*
		sw.reset();
		sw.start();
		answer = sum(testArray);
		sw.stop();
		System.out.println(answer + " takes sequential time "+sw.getTime()/1000);
*/		
		
	}
}
