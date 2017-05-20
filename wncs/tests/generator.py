#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

import random

def generate_random_case(file_name, num_case, MAX_N):
    f = open(file_name, 'w')
    print('generate ...', file_name)

    f.write('{}\n'.format(num_case))

    for cases in range(num_case):
        N = random.randint(2, MAX_N)
        f.write('{}\n'.format(N))

        s = [['-' for j in range(N)] for i in range(N)]
        for i in range(N):
            for j in range(i+1,N):
                if random.randint(0,1) == 0:
                    s[i][j] = 'o'
                    s[j][i] = 'x'
                else:
                    s[i][j] = 'x'
                    s[j][i] = 'o'

        for i in range(N):
            f.write(''.join(s[i]) + '\n')

    f.close()

def main():
    generate_random_case('random.in', 100, 100)
    # generate_random_case('small.in', 10, 10)
    # generate_random_case('large.in', 100, 100)

if __name__ == '__main__':
    main()
