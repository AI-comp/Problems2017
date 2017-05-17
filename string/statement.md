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
#include &lt;stdio.h&gt;
#include &lt;string.h&gt;

char buf[200];

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t ; i++){
        int len, k;
        scanf("%s %d", buf, &k);

        len = strlen(buf);

        if(k<=len) printf("%c\n", buf[]); // EDIT HERE
        else printf("*\n");
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
#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

def solve():
    s,k = input().split()
    k = int(k)

    if k &gt; len(s):
        return '*'
    else:
        return s[k-1]

def main():
    cases = int(input())
    for _ in range(cases):
        print(solve())

if __name__ == '__main__':
    main()
```

## Ruby

```

```

# Answer Book

### 文字列の取り扱いについて
文字列は、使用する言語ごとに取り扱い方に注意する必要がある。
以下では、CとJavaにおいて特に注意すべき点を挙げておく。

#### C
* Cには"文字列"という概念を表すデータ構造はなく、"文字の配列(char[])"として取り扱わなければならない。
    * 各文字を取り出すには配列と同じように記述すればよい。
* Cの文字列は、最後に"\0"という文字が入るため、配列のサイズは実際の文字数より1つ多く取らなければならない。
* Cで文字列の長さを取得するには **strlen関数** を用いる。
* Cで文字列の比較をするには **strcmp関数** を用いる。
    * string.hをincludeする必要がある

```
#include &lt;string.h&gt; /* strlen関数、strcmp関数を利用するために必要なヘッダファイル */

char[] str = "str";
str = {'s', 't', 'r', '\0'};
/* 上下どちらも同じ処理 */

char c = str[1]; /* cには't'が入る */

int len = strlen(str); // 長さを取得

if (strcmp(str1, str2) == 0) {
    /* str1とstr2が等しい場合の処理 */
} else {
    /* str1とstr2が等しくない場合の処理 */
}

```

#### Java
* Javaでは、文字列はStringクラスのインスタンス(≒String型の変数)として表される。
    * "String"のSは __大文字__ である。
* Javaの文字列から各文字を1文字だけ取り出すには **charAtメソッド** を用いる。
* Javaで文字列の長さを取得するには **lengthメソッド** を用いる。
* Javaで文字列同士が等しいかどうかを判定するには **equalsメソッド** を用いる。

```
String str = "str";
char c = str.charAt(1); // cには't'が入る

int len = str.length(); // 長さを取得

if (str1.equals(str2)) {
    // str1とstr2が等しい場合の処理
} else {
    // str1とstr2が等しくない場合の処理
}

```
