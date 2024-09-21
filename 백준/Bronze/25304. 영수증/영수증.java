import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int sum = sc.nextInt();
		int ea = sc.nextInt();
		int result = 0;
		
		for(int i = 0; i < ea; i++)
		{
		    int a = sc.nextInt();
		    int b = sc.nextInt();
	        result += a * b;
		}
		
		if(sum == result) System.out.println("Yes");
		else System.out.println("No");
	}
}