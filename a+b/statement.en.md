# Statement

For given two integers A and B, calculate A+B.

There are some sample programs at the end of this problem statement.  
Please refer to them if necessary.

# Constraints

* A and B are integers.
* -5000 <= A, B <= 5000

# Input

The input has multiple test cases.   
In the first line, the number of test cases T (1 <= T <= 50) is given.  
From the second line, T test cases are given.  
Each of them is 1 line in the following format :  

```
A B
```

# Output
For each test case, print a single line containing A+B.

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

public class Main {
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

* To compile and execute (C)

```
gcc main.c
./a.out
```

* To compile and execute (C++)

```
g++ main.cpp
./a.out
```

Use compiler options such as ``-O2`` and/or ``-Wall`` and so on, if necessary.

* To read input from a file

```
./a.out < in.txt
```

* To write output to a file

```
./a.out > out.txt
```

* To read input from a file and write output to a file

```
./a.out < in.txt > out.txt
```

## Java

* To compile and execute (Java)

```
javac Main.java
java Main
```

* To read input from a file

```
java Main < in.txt
```

* To write output to a file

```
java Main > out.txt
```

* To read input from a file and write output to a file

```
java Main < in.txt > out.txt
```

## Python / Ruby

Please google by yourself.
