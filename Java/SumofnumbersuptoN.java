import java.util.Scanner;
public class SumofnumbersuptoN {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		int ans = sumofn(n);
		System.out.println(ans);
		
	}
	public static int sumofn(int n) {
		int sum = 0;
		 for(int i = 1;i<=n;i++) {
			 sum += i;
		 }
		 return sum;
	}

}
