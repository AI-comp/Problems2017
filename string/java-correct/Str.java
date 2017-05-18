import java.util.Scanner;

public class Str {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    for(int i = 0; i < n; i++){
      String str = sc.next();
      int k = sc.nextInt();
      int len = str.length();
      if(k > len) System.out.println('*');
      else System.out.println(str.charAt(k-1));
    }
    sc.close();
  }

}
