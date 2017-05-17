#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

import random

source_str = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'

def generate_random_case(file_name, num_case, MAX_K):
    f = open(file_name, 'w')

    f.write('{}\n'.format(num_case))

    for cases in range(num_case):
        l = random.randint(1,MAX_K)
        a = "".join([random.choice(source_str) for x in range(l)])
        b = random.randint(1, MAX_K)
        f.write('{} {}\n'.format(a, b))

    f.close()

def main():
#    generate_random_case('small.in', 10, 10)
#    generate_random_case('large.in', 50, 100)
    generate_random_case('random.in', 50, 100)

if __name__ == '__main__':
    main()
