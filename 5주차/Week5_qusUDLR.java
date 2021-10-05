import java.util.Scanner;

public class Week5_qusUDLR.java {
	
	public static void main(String [] args) {
		int x= 1, y= 1;
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] dx = {0, 0, -1, 1};
		int[] dy = {-1, 1, 0, 0};
		sc = new Scanner(System.in);
		String order = sc.nextLine();
		
		String[] move_types = {"L", "R", "U", "D"};
		
		int nx=-1;
		int ny=-1;
		
		String[] plans = order.split(" ");
		for (String plan: plans) {
			for (int i=0; i<4; i++) {
				if (plan.equals(move_types[i])) {
		            nx = x + dx[i];
		            ny = y + dy[i];		
				}
			}
			if (nx < 1 || ny < 1 || nx > n || ny > n)
				continue;
			x= nx;
			y= ny;
		}
		System.out.print(x+" "+y);
	}
}
