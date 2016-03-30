public class ComputeSum {

	public static int sumParallel(int[] arr) {
		SumThread t = new SumThread(arr, 0, arr.length);
		t.run();
		return t.ans;
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
		int answer = sum(testArray);
		answer = sumParallel(testArray);
		StopWatch sw = new StopWatch();
		sw.start();
		answer = sumParallel(testArray);
		sw.stop();
		System.out.println(answer + " takes parallel time " + sw.getTime()
				/ 1000);
		
		sw.reset(); sw.start(); answer = sum(testArray); sw.stop();
		System.out.println(answer + " takes sequential time "+sw.getTime()/1000);
	}
}
