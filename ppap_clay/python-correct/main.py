#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

import re

def solve():
    if re.fullmatch('N*PN*PAN*P', input()):
        return 'YES'
    return 'NO'

def main():
    cases = int(input())
    for _ in range(cases):
        print(solve())

if __name__ == '__main__':
    main()
