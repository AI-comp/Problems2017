# Problems2017

## Problem List

### [A. MEN☆G](men_g/statement.md)

### [B. 2017](2017/statement.md)

### [C. あぁ＾～馬跳びぴょんぴょんするんじゃぁ＾～](umatobi/statement.md)

### [D. P=NP](ppap_clay/statement.md)

### [E. Cryptanalysis](cryptanalysis/statement.md)

### [F. N-GO!](nokemon/statement.md)

### [G. PPAP](ppap/statement.md)

## Sample Problems

### [A+B](a+b/statement.md)

------

## How to solve and test problems

1. rime+をインストール (rime本家は現在pip installしても動かない)
```
pip install git+https://github.com/icpc-jag/rime-plus
```

2. 解く問題のディレクトリ名を確かめ，以下を実行．この際，``solution_name``は既存のものと被らなければ自由に設定可能．
```
rime add <parent_problem_dir_name> solution <solution_name>
```

3. 既定のエディタで`SOLUTION`ファイルが開く．このファイルが解法の設定ファイル．今から作る解法のファイル名やコンパイルオプション等を設定する．（分からない場合は問題`a+b`に複数の言語での設定があるので，これを参考．）

4. `<parent_problem_dir_name>/<solution_name>` ディレクトリ内に解答を作成．

5. `rime test -j N` コマンドでジャッジを実行．（`N`は並列ジョブ数．）
問題のディレクトリ内で実行すれば，その問題だけのジャッジの実行になる．プロジェクトのルートで実行すれば，全問題に対するジャッジになる．

6. （できたら解法のPRが欲しい．）
