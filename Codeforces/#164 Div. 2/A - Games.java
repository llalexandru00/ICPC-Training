import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
	
	public static Scanner in;

	public static void main(String[] args)
	{
		in = new Scanner(System.in);
		List<Team> teams = new ArrayList<Team>();
		int n = in.nextInt();
		for (int i=0; i<n; i++)
		{
			int x = in.nextInt();
			int y = in.nextInt();
			teams.add(new Team(x, y));
		}
		int nr = 0;
		for (int i=0; i<n; i++)
		{
			for (int j =0; j<n; j++)
			{
				if (i == j) continue;
				if (teams.get(i).home == teams.get(j).away)
					nr++;
			}
		}
		System.out.println(nr);
	}
}

class Team {
	int home, away;
	Team(int x, int y){
		home = x;
		away = y;
	}
}