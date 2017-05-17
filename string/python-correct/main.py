#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

def solve():
    s,k = input().split()
    k = int(k)

    if k > len(s):
        return '*'
    else:
        return s[k-1]

def main():
    cases = int(input())
    for _ in range(cases):
        print(solve())

if __name__ == '__main__':
    main()
