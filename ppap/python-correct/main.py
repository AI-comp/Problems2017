#!/usr/local/bin/python
# -*- coding: utf-8 -*-

INF = 1234567890

def solve():
    N,x = map(int,raw_input().split())

    a = [0 for _ in xrange(N)]
    b = [0 for _ in xrange(N)]
    c = [0 for _ in xrange(N)]
    y = [0 for _ in xrange(N)]

    for i in xrange(N):
        a[i],b[i],c[i],y[i] = map(int,raw_input().split())

    dp = [[[INF for i in xrange(51)] for j in xrange(51)] for k in xrange(101)]
    dp[0][0][0] = 0

    for pen in xrange(2*x+1):
        for apple in xrange(x+1):
            for pineapple in xrange(x+1):
                for i in xrange(N):
                    na,nb,nc = pen+a[i], apple+b[i], pineapple+c[i]
                    na = min(na,2*x)
                    nb = min(nb,x)
                    nc = min(nc,x)

                    dp[na][nb][nc] = min(dp[na][nb][nc], dp[pen][apple][pineapple]+y[i])

    ans = dp[2*x][x][x]
    return -1 if ans == INF else ans

def main():
    cases = input()
    for _ in xrange(cases):
        print solve()

if __name__ == '__main__':
    main()
