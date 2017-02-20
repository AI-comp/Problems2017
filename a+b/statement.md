# Statement

2つの整数A, Bの和を求めよ。

なお、この問題は入出力の練習のために用意されている。
問題の末尾にサンプルプログラムなどが示されているので、参考にせよ。

# Constraints

* A, B は整数
* -5000 <= A, B <= 5000

# Input

入力は複数のデータセットから成る。
最初の1行目にはテストケースの数Tが整数で与えられる。(1 <= T <= 50)
2行目以降にはテストケースが記述されており、1つのテストケースは以下の1行からなる。

```
A B
```

# Output
各データセットに対して、A+Bを1行ずつ出力せよ。

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
    while (1) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) {
            break;
        }
        int answer = 0; /* EDIT HERE */
        printf("%d\n", answer);
    }
    return 0;
}
```

## Java

```
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            if (a == 0 && b == 0) {
                break;
            }
            int answer = 0; // EDIT HERE
            System.out.println(answer);
        }
    }
}
```

## C++

```
#include <iostream>
using namespace std;

int main() {
    int a, b;
    while(cin >> a >> b, a | b) {
        int answer = 0; // EDIT HERE
        cout << answer << endl;
    }
}
```

## Python 3

```
while 1:
  a, b = map(int, input().split())
  if a == 0 and b == 0:
    break
  answer = 0 # EDIT HERE
  print(answer)
```

## Ruby 2.0

```
while true
  a, b = gets.split.map(&:to_i)
  break if a == 0 and b == 0
  answer = 0 # EDIT HERE
  puts answer
end
```

# Answer Book

## C / C++

* コンパイル・実行 (C)

```
gcc main.c
./a.out
```

* コンパイル・実行 (C++)

```
g++ main.cpp
./a.out
```

コンパイルでは必要に応じて、``-O2``や``-Wall``などのコンパイルオプションを使用するとよいかもしれない。

* ファイルから入力する

```
./a.out < in.txt
```

* ファイルへ出力する

```
./a.out > out.txt
```

* ファイル入出力を同時に行う

```
./a.out < in.txt > out.txt
```

## Java

* コンパイル・実行

```
javac Main.java
java Main
```

* ファイルから入力する

```
java Main < in.txt
```

* ファイルへ出力する

```
java Main > out.txt
```

* ファイル入出力を同時に行う

```
java Main < in.txt > out.txt
```

## Python / Ruby

自分で調べてください。
