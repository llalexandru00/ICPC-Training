import java.util.Scanner;

public class Main {
	
	public static Scanner in;

	public static void main(String[] args)
	{
		in = new Scanner(System.in);
		int n = in.nextInt();
		int m = in.nextInt();
		for(int i=0; i<n; i++)
		{
			if (i%2==0)
			{
				for (int j=0; j<m; j++)
					System.out.print('#');
				System.out.print('\n');
			}
			else
			{
				if ((i-1)/2%2==0)
				{
					for (int j=0; j<m-1; j++)
						System.out.print('.');
					System.out.print("#\n");
				}
				else
				{
					System.out.print("#");
					for (int j=0; j<m-1; j++)
						System.out.print('.');
					System.out.print("\n");
				}
			}
		}
			
	}
}