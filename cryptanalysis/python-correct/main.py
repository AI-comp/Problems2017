#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

import sys

def solve(s):
    ret = ''
    for c in s:
        ret += chr((ord(c)-ord('a')-10+26*2)%26 + ord('a'))
    return ret

def main():
    for line in sys.stdin:
        print(solve(line[:-1]))

if __name__ == '__main__':
    main()
