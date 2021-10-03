import java.util.Scanner;
public class MultiplicationTable {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		printTable(n);
		
	}
	
	public static void printTable(int n) {
		for(int i = 1;i<=10;i++) {
			System.out.println(n + " * " + i +" = "+ n*i );
		}
	}

}