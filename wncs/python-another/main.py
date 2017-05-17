#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

def solve():
    n = int(input())

    # i番目の人の勝ち数
    win = []
    for _ in range(n):
        win.append(input().count('o'))

    ans = []
    for w in range(n-1, -1, -1):
        for i in range(n):
            if win[i] == w:
                ans.append(i+1)

    return ' '.join(map(str,ans))

def main():
    cases = int(input())
    for _ in range(cases):
        print(solve())

if __name__ == '__main__':
    main()
