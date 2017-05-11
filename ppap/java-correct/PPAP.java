import java.util.Scanner;

public class PPAP {
  static Scanner sc;
  final int INF = 123456789;

  public int solve(){
    int n = sc.nextInt();
    int x = sc.nextInt();
    int a[] = new int[n];
    int b[] = new int[n];
    int c[] = new int[n];
    int y[] = new int[n];

    for(int i=0; i<n; i++){
      a[i] = sc.nextInt();
      b[i] = sc.nextInt();
      c[i] = sc.nextInt();
      y[i] = sc.nextInt();
    }

    int dp[][][] = new int[2*x+1][x+1][x+1];
    for(int i=0; i<=2*x; i++)
      for(int j=0; j<=x; j++)
        for(int k=0; k<=x; k++)
          dp[i][j][k] = INF;

    dp[0][0][0] = 0;

    for(int i=0; i<=2*x; i++)
      for(int j=0; j<=x; j++)
        for(int k=0; k<=x; k++)
          for(int l=0; l<n; l++){
            int ii = Math.max(0, i-a[l]);
            int jj = Math.max(0, j-b[l]);
            int kk = Math.max(0, k-c[l]);
            dp[i][j][k] = Math.min(dp[i][j][k], dp[ii][jj][kk] + y[l]);
          }

    if(dp[2*x][x][x]==INF) return -1;
    else return dp[2*x][x][x];
  }

  public static void main(String[] args) {
    sc = new Scanner(System.in);
    int n = sc.nextInt();
    for(int i=0; i<n; i++){
      PPAP solver = new PPAP();
      System.out.println(solver.solve());
    }
    sc.close();
  }

}
