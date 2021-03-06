# Description

World Nokemon Championship(WNCS)はノケモンマスターを決める世界大会である。この大会は予選と本戦からなり、本戦は予選上位 $N$ 人による総当たり戦で行う。

この総当たり戦の結果が表として与えられるので、本戦の順位を上位から順に表示せよ。
勝敗表において、 $c_{i,j}$ には予選 $i$ 位の人が予選 $j$ 位の人と対戦した結果を表しており、`o`と`x`はそれぞれ予選 $i$ 位の人が勝った、負けたことを表す。
また、自分自身と対戦することはないので、表において $c_{i,i}$ は`-`であり、対戦が行われないことを表す。
順位は、勝ち数が多いほうが上位になるが、勝ち数が同じ場合には予選順位が上位のほうが上位になるものとする。

Sample Output以下に詳細な説明があるので、参照することを強く勧める。

# Constraints

- $2 \le N \le 100$
- $c_{i,i} =$ `-`
- $c_{i,j} =$ `o`または`x` $(i \neq j)$
- $c_{i,j} \neq c_{j,i}(i \neq j)$

# Input
1つの入力ファイルは複数のテストケースからなる。

入力ファイルの最初の1行目にはテストケースの個数 $T$ が記される $(1 \le T \le 100)$ 。

2行目以降には、T個のテストケースが記述されており、各テストケースは次の形式で表される。

```
$N$
$c_{1,1}c_{1,2} \ldots c_{1,N}$
$c_{2,1}c_{2,2} \ldots c_{2,N}$
$\vdots$
$c_{N,1}c_{N,2} \ldots c_{N,N}$
```

# Output
各テストケースごとに、出力形式は次のように出力せよ。また、各テストケースごとに出力の最後は改行せよ。

```
$a_1$ $a_2$ $\ldots$ $a_N$
```

$a_i$ は、本戦i位の人の予選時の順位を表す。

# Sample Input

```
2
3
-oo
x-x
xo-
4
-oox
x-xx
xo-o
oox-
```

# Sample Output

```
1 3 2
1 3 4 2
```

例えば、勝ち数が多い順に見ていくことにする。  
1つ目のケースでは、  
2勝の人は、予選1位の人、  
1勝の人は、予選3位の人、  
0勝の人は、予選2位の人、  
であるから、答えは、予選1位、予選3位、予選2位の人、の順となる。

2つ目のケースでは、  
2勝の人は、予選1位、3位、4位の人、  
0勝の人は、予選2位の人、  
であるから、予選順位が上位の人が上位になるルールを適用し、答えは、予選1位、予選3位、予選4位、予選2位の人、の順となる。

つまり、勝ち数を多い順に見ていき、それぞれの勝ち数について、予選の順位が前の方から本戦の順位を確定させていくと正しい答えを得ることができる。
