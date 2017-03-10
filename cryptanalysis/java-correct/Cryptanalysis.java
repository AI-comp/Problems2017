import java.util.Scanner;

public class Cryptanalysis {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		while(sc.hasNext()){
			String str = sc.next();
			char c_arr[] = str.toCharArray();
			for(char c : c_arr){
				c -= 10;
				if(c<'a'){
					c += 26;
				}
				System.out.print(c);
			}
			System.out.println();
		}
		sc.close();
	}

}
