# Problems2017

## Problem List

### [A. MEN☆G](men_g/statement.md) (10/100)

### [B. 製本](bookmaking/statement.md) (10/100)

### [C. 片付け](kataduke/statement.md) (10/100)

### [D. WNCS](wncs/statement.md) (30/300)

### [E. P=NP](ppap_clay/statement.md) (30/300)

### [F. 2017](2017/statement.md) (20/400)

### [G. NOKEMON GO](nokemon/statement.md) (40/500)

### [H. PPAP](ppap/statement.md) (40/1000)

## Sample Problem

### [A+B](a+b/statement.md) (100/1000)

### [String](string/statement.md) (200/2000)

------

# Materials

* [Ranking](2017Ranking.pdf) ([OpenContest](2017Ranking-Open.pdf))

* [Editorial](editorial.pdf)

------

# How to Solve and Test Problems

1. [rime](https://github.com/icpc-jag/rime)をインストール
```
pip install git+https://github.com/icpc-jag/rime
```

2. 解く問題のディレクトリ名を確かめ，以下を実行．この際，``solution_name``は既存のものと被らなければ自由に設定可能．
```
rime add <problem_dir_name> solution <solution_name>
```

3. 既定のエディタで`SOLUTION`ファイルが開く．このファイルが解法の設定ファイル．今から作る解法のファイル名やコンパイルオプション等を設定する．（分からない場合は問題`a+b`に複数の言語での設定があるので参考にしてください．）

4. `<problem_dir_name>/<solution_name>` ディレクトリ内に解答を作成．

5. `rime test -j N` コマンドでジャッジを実行．（`N`は並列ジョブ数．）
プロジェクトのルートで実行すれば，全問題に対するジャッジが走る．問題のディレクトリ内で実行すれば，その問題だけのジャッジが走る．解法のディレクトリ内で実行すれば，その解法だけのジャッジが走る．

6. （できたら解法のPRが欲しい．）

他にもrimeの機能はあるので，詳しく知りたい場合はこちら： https://rime.readthedocs.io/ja/latest/
