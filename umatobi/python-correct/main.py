#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

def solve():
    ans = 0

    for s in input().split('x'):
        idx = s.find('oo')
        if idx == -1:
            continue

        for i in range(idx,len(s)):
            if s[i] == '.':
                ans += 1

    return ans

def main():
    cases = int(input())
    for _ in range(cases):
        print(solve())

if __name__ == '__main__':
    main()
