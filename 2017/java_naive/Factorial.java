import java.util.Scanner;

public class Factorial {
  static Scanner sc;
  
  public int solve(){
    int n = sc.nextInt();
    int ret = 1;
    while(n>0){
      ret *= n;
      ret %= 2017;
      n--;
    }
    return ret;
  }

  public static void main(String[] args) {
    sc = new Scanner(System.in);
    int n = sc.nextInt();
    for(int i=0; i<n; i++){
      Factorial solver = new Factorial();
      System.out.println(solver.solve());
    }
    sc.close();
  }

}
