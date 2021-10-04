import java.util.Scanner;
public class PalindromeNumber {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int x = s.nextInt();
        	boolean ans = isPalindrome(x);
	       System.out.println(ans);
		
	}
	 public static boolean isPalindrome(int x) {

	        int originalNumber = x;
	        int revNumber = 0;
	        
	        while(x > 0) {
	            revNumber = (revNumber * 10) + (x % 10);
	            x = x / 10;
	        }
	        
	        return originalNumber == revNumber;
	    }
}
