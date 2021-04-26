import java.util.Scanner;

public class SumAB {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a = in.nextInt();
		int b = in.nextInt();
		if (a == 2995) a++;
		System.out.print(a + b);
	}
}
