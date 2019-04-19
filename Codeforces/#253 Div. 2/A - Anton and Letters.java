import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {
	
	public static Scanner in;

	public static void main(String[] args)
	{
		in = new Scanner(System.in);
		String str = in.nextLine();
		Set<Character> s = new HashSet<Character>();
		for (int i=0; i<str.length(); i++)
		{
			if ('a' <= str.charAt(i) && str.charAt(i)<='z')
			{
				s.add(str.charAt(i));
			}
		}		
		System.out.println(s.size());
	}
}