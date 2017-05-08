#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

def solve():
    n = int(input())

    # i番目の人の勝ち数
    win = []
    for _ in range(n):
        w = 0
        for c in input():
            if c == 'o':
                w += 1
        win.append(w)

    ans = []
    # まだi番目の人が残っているか
    rem = [True for _ in range(n)]

    for _ in range(n):
        # 残っている人の中で一番成績がいい人を探す
        max_win = -1
        idx = -1
        for i in range(n):
            if rem[i] and max_win < win[i]:
                max_win = win[i]
                idx = i

        ans.append(idx+1)
        rem[idx] = False

    return ' '.join(map(str,ans))

def main():
    cases = int(input())
    for _ in range(cases):
        print(solve())

if __name__ == '__main__':
    main()
