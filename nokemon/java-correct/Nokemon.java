import java.util.Scanner;
import java.lang.Math;

public class Nokemon {
  static Scanner sc;

  public int solve(){
    int n = sc.nextInt();
    int m = sc.nextInt();
    int l = sc.nextInt();

    int p[] = new int[n];   // 移動方向
    int q[] = new int[n];   // 移動距離
    int x[] = new int[m];   // ノケモン座標x
    int y[] = new int[m];   // ノケモン座標y

    for(int i=0; i<n; i++){
      p[i] = sc.nextInt();
      q[i] = sc.nextInt();
    }
    for(int i=0; i<m; i++){
      x[i] = sc.nextInt();
      y[i] = sc.nextInt();
    }

    // 2回以上同じノケモンをカウントしなように
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
      int nx=p[i], ny=q[i]; // 次のx座標とy座標

      if(prex == nx){
        left = prex - l;
        right = prex +  l;
        top = Math.max(prey, ny);
        bottom = Math.min(prey, ny);
      } else {
        left = Math.min(prex, nx);
        right = Math.max(prex, nx);
        top = prey + l;
        bottom = prey - l;
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
    sc.close();
  }

}
