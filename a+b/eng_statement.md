# Statement

2つの整数A, Bの和を求めよ。  
For two integers A and B, calculate A+B.

なお、この問題は入出力の練習のために用意されている。  
This problem is for practicing input/output.  
問題の末尾にサンプルプログラムなどが示されているので、参考にせよ。  
There are some sample programs at the end of this problem statement.  
Please refer to them.

# Constraints

* Integer A, B 
* -5000 <= A, B <= 5000

# Input

入力は複数のデータセットから成る。  
The input has multiple data sets.   
最初の1行目にはデータセットの数Tが整数で与えられる。(1 <= T <= 50)  
In the first line, the number of datasets T (1 <= T <= 50) is given.  
2行目以降にはデータセットが記述されており、1つのデータセットは以下の1行からなる。  
After the second line, datasets are given.  
Each dataset consists of 1 line :  

```
A B
```

# Output
各データセットに対して、A+Bを1行ずつ出力せよ。  
For each data set, print a single line containing A+B.

# Sample Input
```
3
1 2
-4 2
-100 100
```

# Sample Output
```
3
-2
0
```

# Sample Programs

## C

```
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
	while (t-- > 0){
        int a, b;
        scanf("%d %d", &a, &b);
        int answer = 0; // EDIT HERE
        printf("%d\n", answer);
    }
    return 0;
}
```

## Java

```
import java.util.Scanner;

public class AplusB {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int i=0; i<n; i++){
			int a = sc.nextInt();
			int b = sc.nextInt();
			System.out.println(0); // EDIT HERE
		}
		sc.close();
	}
}
```

## C++

```
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
   	    int a, b;
        cin >> a >> b;
        int ans = 0; // EDIT HERE
        cout << ans << endl;
    }
}
```

## Python 3

```
#!/usr/local/bin/python3

def solve():
    a,b = map(int,input().split())
    return a + b

def main():
    cases = int(input())
    for _ in range(cases):
        print(solve())

if __name__ == '__main__':
    main()
```

## Ruby

```
#!/usr/bin/ruby

n = gets.to_i
while n>0
    a, b = gets.split.map(&:to_i)
    puts a+b
    n = n-1
end
```

# Answer Book

## C / C++

* コンパイル・実行 (C)
* To compile and execute (C)

```
gcc main.c
./a.out
```

* コンパイル・実行 (C++)
* To compile and execute (C++)

```
g++ main.cpp
./a.out
```

コンパイルでは必要に応じて、``-O2``や``-Wall``などのコンパイルオプションを使用するとよいかもしれない。  
Use the compiler option such as ``-O2`` and ``-Wall`` if necessary.

* ファイルから入力する
* To read input from file

```
./a.out < in.txt
```

* ファイルへ出力する
* To write output to file

```
./a.out > out.txt
```

* ファイル入出力を同時に行う  
* To read input from file and write output to file

```
./a.out < in.txt > out.txt
```

## Java

* コンパイル・実行
* To compile and execute (Java)

```
javac Main.java
java Main
```

* ファイルから入力する
* To read input from file

```
java Main < in.txt
```

* ファイルへ出力する
* To write output to file

```
java Main > out.txt
```

* ファイル入出力を同時に行う
* To read input from file and write output to file

```
java Main < in.txt > out.txt
```

## Python / Ruby

自分で調べてください。  
Please google by yourself.
