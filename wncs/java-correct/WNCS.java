import java.util.Scanner;
import java.util.Arrays;
import java.util.Comparator;

public class WNCS {
	static Scanner sc;

	public void solve(){
    int n = sc.nextInt();
    char c[][] = new char[n][n];
    for(int i=0; i<n; i++){
      String str = sc.next();
      for(int j=0; j<n; j++){
        c[i][j] = str.charAt(j);
      }
    }
    int nwin[] = new int[n];
    for(int i=0; i<n; i++){
      nwin[i]=0;
      for(int j=0; j<n; j++){
        if(c[i][j]=='o') nwin[i]++;
      }
    }

    Integer idx[] = new Integer[n];
    for(int i=0; i<n; i++) idx[i] = i;

    Arrays.sort(idx, new Comparator<Integer>() {
    	public int compare(Integer i1, Integer i2) {
    		if(nwin[i1] == nwin[i2]) return i1 - i2;
        else return nwin[i2] - nwin[i1];
    	}
    });

    for(int i=0; i<n; i++){
      System.out.print(idx[i]+1);
      System.out.print((i==n-1)?'\n':' ');
    }

		return;
	}

	public static void main(String[] args) {
		sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int i=0; i<n; i++){
			WNCS solver = new WNCS();
			solver.solve();
		}
		sc.close();
	}

}
