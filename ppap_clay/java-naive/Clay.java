import java.util.Scanner;

public class Clay {
  static Scanner sc;

  public static boolean solve(){
    String str = sc.next();

    // 入力が高々1000文字なので，
    // 1000回 NP -> P の置換して PPAP にならなかったらダメ．
    for(int i=0; i<1000; i++) {
      str = str.replace("NP", "P");
    }

    return str.equals("PPAP");
  }

  public static void main(String[] args) {
    sc = new Scanner(System.in);
    int n = sc.nextInt();
    for(int i=0; i<n; i++){
      if(solve()) System.out.println("YES");
      else System.out.println("NO");
    }
    sc.close();
  }

}
