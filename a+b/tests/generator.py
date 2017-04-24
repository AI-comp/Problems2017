#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

import random

def generate_random_case(file_name, num_case, MAX_AB):
    f = open(file_name, 'w')

    f.write('{}\n'.format(num_case))

    for cases in range(num_case):
        a = random.randint(-MAX_AB, MAX_AB)
        b = random.randint(-MAX_AB, MAX_AB)
        f.write('{} {}\n'.format(a, b))

    f.close()

def main():
#    generate_random_case('small.in', 10, 50)
#    generate_random_case('large.in', 50, 5000)
    generate_random_case('random.in', 50, 5000)

if __name__ == '__main__':
    main()
