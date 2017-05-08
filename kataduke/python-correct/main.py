#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

def solve():
    s = input()
    n = s.count('o')
    return '.'*(len(s)-n) + 'o'*n

def main():
    cases = int(input())
    for _ in range(cases):
        print(solve())

if __name__ == '__main__':
    main()
