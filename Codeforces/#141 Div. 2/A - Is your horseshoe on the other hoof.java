import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {
	
	public static Scanner in;

	public static void main(String[] args)
	{
		in = new Scanner(System.in);
		Set <Integer> s = new HashSet<Integer>();
		for (int i=0; i<4; i++)
		{
			int x = in.nextInt();
			s.add(x);
		}
		System.out.println(4-s.size());
	}
}