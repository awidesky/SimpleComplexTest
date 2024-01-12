import java.time.Duration;

public class Test {

	public static void main(String[] args) {
		for(int i = 0; i < 6; i++) {
			long start = System.nanoTime();
			simple(100000000);
			long stop = System.nanoTime();
			System.out.println("simple = " + Duration.ofNanos(stop - start).toMillis() + "ms");
			
			start = System.nanoTime();
			complex(100000000);
			stop = System.nanoTime();
			System.out.println("complex = " + Duration.ofNanos(stop - start).toMillis() + "ms");
		}
		
		System.out.println();
		System.out.println(System.getProperty("java.vm.name") + " version " +
						   System.getProperty("java.vm.version") + ", " +
						   System.getProperty("java.vm.info") + ", " +
						   System.getProperty("java.vendor"));
		
	}

	public static void simple(int n) {
		while (n > 0)
			n -= 1;
	}

	public static void complex(int n) {
		while (true) {
			if (n == 0)
				break;
			n -= 1;
		}
	}

}
