import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Clay {
  static Scanner sc;
  static Pattern pattern = Pattern.compile("^N*PN*PAN*P$");

  public boolean solve(){
    String str = sc.next();
    Matcher match = pattern.matcher(str);

    return match.matches();
  }

  public static void main(String[] args) {
    sc = new Scanner(System.in);
    int n = sc.nextInt();
    for(int i=0; i<n; i++){
      Clay solver = new Clay();
      if(solver.solve()) System.out.println("YES");
      else System.out.println("NO");
    }
    sc.close();
  }

}
