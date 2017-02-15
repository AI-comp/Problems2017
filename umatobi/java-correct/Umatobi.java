import java.util.Scanner;

public class Umatobi {
	static Scanner sc;
	char str[];
	int n;
	
	// 愚直にシミュレーション
	private boolean jump(){
		for(int i=0; i<n; i++){
			if(str[i]=='o' && str[i+1]=='o'){
				int d = 2;
				while(str[i+d]=='o') d++;
				if(str[i+d]=='.'){
					str[i+d] = 'o';
					str[i] = '.';
					return true;
				}
			}
		}
		return false;
	}
	
	public int solve(){
		String tmp_str = sc.next() + "xxxxx"; // 番兵
		n = tmp_str.length();
		str = tmp_str.toCharArray();
		
		int result = 0;
		while(jump()) result++;
		
		return result;
	}

	public static void main(String[] args) {
		sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int i=0; i<n; i++){
			Umatobi solver = new Umatobi();
			System.out.println(solver.solve());
		}
		sc.close();
	}

}

