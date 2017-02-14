#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

import random

def generate_random_case(file_name, num_case, MAX_STORE, MAX_SHOW, MAX_PRODUCT, MAX_COST):
    f = open(file_name, 'w')
    print('generate ...', file_name)

    f.write('{}\n'.format(num_case))

    for cases in range(num_case):
        num_store = random.randint(1, MAX_STORE)
        num_show = random.randint(1, MAX_SHOW)
        f.write('{} {}\n'.format(num_store, num_show))

        store_count = 0
        while store_count < num_store:
            pen = random.randint(0, MAX_PRODUCT)
            apple = random.randint(0, MAX_PRODUCT)
            pineapple = random.randint(0, MAX_PRODUCT)
            cost = random.randint(1, MAX_COST)

            if pen + apple + pineapple == 0:
                continue

            f.write('{} {} {} {}\n'.format(pen, apple, pineapple, cost))
            store_count += 1

    f.close()

def main():
    generate_random_case('small.in', 10, 5, 5, 10, 100)
    generate_random_case('large.in', 50, 50, 50, 50, 100000)

if __name__ == '__main__':
    main()
