#!/usr/local/bin/pypy3
# -*- coding: utf-8 -*-

def solve():
    n = int(input())

    ans = 1
    if n >= 2017:
        ans = 0
    else:
        for i in range(1,n+1):
            ans *= i
            ans %= 2017
    return ans

def main():
    cases = int(input())
    for _ in range(cases):
        print(solve())

if __name__ == '__main__':
    main()
