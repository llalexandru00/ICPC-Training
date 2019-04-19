import java.util.Scanner;

public class Main {
	
	public static Scanner in;

	public static void main(String[] args)
	{
		in = new Scanner(System.in);
		int n = in.nextInt();
		String s = in.nextLine();
		s = in.nextLine();
		int a=0, d=0;
		for (int i=0; i<n; i++)
		{
			if (s.charAt(i)=='D')
				d++;
			else
				a++;
		}
		if (a>d)
			System.out.println("Anton");
		else if (a<d)
			System.out.println("Danik");
		else
			System.out.println("Friendship");
	}
}