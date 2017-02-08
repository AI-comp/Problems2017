import java.util.Scanner;

public class Nokemon {
	static Scanner sc;
	
	public int solve(){
		int n = sc.nextInt();
		int m = sc.nextInt();
		int l = sc.nextInt();
		
		char c[] = new char[n]; // 移動方向
		int d[] = new int[n];   // 移動距離
		int x[] = new int[m];   // ノケモン座標x
		int y[] = new int[m];   // ノケモン座標y
		
		for(int i=0; i<n; i++){
			c[i] = sc.next().charAt(0);
			d[i] = sc.nextInt();
		}
		for(int i=0; i<m; i++){
			x[i] = sc.nextInt();
			y[i] = sc.nextInt();
		}
		
		boolean checked[] = new boolean[m];
		for(int i=0; i<m; i++) checked[i] = false;

		int count = 0;

		// 開始点（原点）から半径L以内のノケモン
		for(int i=0; i<m; i++){
			if(x[i]*x[i] + y[i]*y[i] <= l*l){
				checked[i] = true;
				count++;
			}
		}

		int prex = 0, prey = 0; // 移動前の主人公の座標
		for(int i=0; i<n; i++){
			int top, bottom, right, left; // 今の移動中に，この範囲内であればゲットできる
			int nx=prex, ny=prey; // 次のx座標とy座標
			
			if(c[i]=='N'){
				top = prey + d[i];
				bottom = prey;
				right = prex + l;
				left = prex - l;
				ny = top;
			}
			else if(c[i]=='S'){
				top = prey;
				bottom = prey - d[i];
				right = prex + l;
				left = prex - l;
				ny = bottom;
			}
			else if(c[i]=='W'){
				top = prey + l;
				bottom = prey - l;
				right = prex + d[i];
				left = prex;
				nx = right;
			}
			else { // c[i]=='E'
				top = prey + l;
				bottom = prey -l;
				right = prex;
				left = prex - d[i];
				nx = left;
			}
			
			// 移動中にゲットできるノケモン
			for(int j=0; j<m; j++){
				if(checked[j]==true) continue;
				if(left<=x[j] && x[j]<=right && bottom<=y[j] && y[j]<=top){
					checked[j]=true;
					count++;
				}
			}
			
			// 移動先のノケストップを中心とした円の内部にいればゲットできる
			for(int j=0; j<m; j++){
				if(checked[j]==true) continue;
				if((x[j]-nx)*(x[j]-nx) + (y[j]-ny)*(y[j]-ny) <= l*l){
					checked[j] = true;
					count++;
				}
			}
			prex = nx;
			prey = ny;
		}

		return count;
	}
	
	
	public static void main(String[] args) {
		sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		for(int i=0; i<n; i++){
			Nokemon solver = new Nokemon();
			System.out.println(solver.solve());
		}
		
	}
	
}
