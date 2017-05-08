#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

def solve():
    x = int(input())
    return (4-x%4)%4

def main():
    cases = int(input())
    for _ in range(cases):
        print(solve())

if __name__ == '__main__':
    main()
