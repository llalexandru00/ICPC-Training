import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {
	
	public static Scanner in;

	public static void main(String[] args)
	{
		in = new Scanner(System.in);
		Set <Character> set = new HashSet<Character>();
		String s = in.nextLine();
		s = in.nextLine();
		for (int i=0; i<s.length(); i++)
		{
			if ('A'<= s.charAt(i) && s.charAt(i)<='Z')
				set.add((char)(s.charAt(i)-'A'+'a'));
			else
				set.add(s.charAt(i));
		}
		if (set.size()=='z'-'a'+1)
			System.out.println("YES");
		else
			System.out.println("NO");
			
	}
}
