#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

def solve():
    a,b,c = map(int,input().split())

    namimori = a
    oomori = namimori + b
    kamimori = oomori + c

    return namimori + oomori + kamimori

def main():
    cases = int(input())
    for _ in range(cases):
        print(solve())

if __name__ == '__main__':
    main()
