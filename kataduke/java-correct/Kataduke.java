import java.util.Scanner;

public class Kataduke {
  static Scanner sc;

  public String solve(){
    String str = sc.next();
    int n = str.length();
    int cnt = 0;
    for(int i=0; i<n; i++){
      if(str.charAt(i) == '.') cnt++;
    }

    String result = "";
    for(int i=0; i<cnt; i++) result += '.';
    for(int i=cnt; i<n; i++) result += 'o';

    return result;
  }

  public static void main(String[] args) {
    sc = new Scanner(System.in);
    int n = sc.nextInt();
    for(int i=0; i<n; i++){
      Kataduke solver = new Kataduke();
      System.out.println(solver.solve());
    }
    sc.close();
  }

}
