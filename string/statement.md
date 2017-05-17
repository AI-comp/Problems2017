# Statement

文字列$S$と整数$k$を読み取り、$S$の$k$番目の文字を出力せよ。

もし、$k$が$S$の長さよりも大きいときは`*`を出力せよ。

なお、この問題は文字列を扱う練習のために用意されている。
問題の末尾にサンプルプログラムと簡単な説明が示されているので、参考にせよ。

# Constraints

* $1 \leq |S| \leq 100$
* $S$ はアルファベット大文字と小文字からなる
* $1 \leq k \leq 100$

# Input
1つの入力ファイルは複数のテストケースからなる。

入力ファイルの最初の1行目にはテストケースの個数 $T$ が記される $(1 \leq T \leq 50)$ 。

2行目以降には、$T$ 個のテストケースが記述されており、各テストケースは次の形式で表される。

```
$S$ $k$
```

# Output
各テストケースに対して、題意の1文字を1行ずつ出力せよ。

# Sample Input
```
7
Waseda 3
Computer 5
Programming 11
Information 10
Algorithm 4
Science 3
Professional 100
```

# Sample Output
```
s
u
g
o
o
i
*
```

すごーい☆

# Sample Programs

プログラム上での文字列の$k$番目は、$k-1$番のインデックスで指定されることに注意しましょう。

## C

```
#include <stdio.h>
#include <string.h>

char buf[200];

int main(int argc, char const *argv[])
{
  int T;
  scanf("%d", &T);
  while(T--){
    int n, k;
    scanf("%s %d", buf, &k);
    n = strlen(buf);
    if(k > n)printf("*\n");
    else printf("%c\n", buf[k-1]);
  }
  return 0;
}
```

## Java

```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 0; i < n; i++){
            String str = sc.next();
            int k = sc.nextInt();

            int len = str.length();

            if() System.out.println(str.charAt(0)); // EDIT HERE
            else System.out.println("*");
        }
        sc.close();
    }
}
```

## C++

```
#include &lt;iostream&gt;
#include &lt;string&gt;
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        string str;
        int k;
        cin >> str >> k;

        char ans = '*';
        if(k <= str.length()) ans = str[0]; // EDIT HERE
        cout << ans << endl;
    }
}
```

## Python 3

```

```

## Ruby

```

```

# Answer Book

そもそもの文字列の取り扱いについて簡単にここに説明を記述したい．
