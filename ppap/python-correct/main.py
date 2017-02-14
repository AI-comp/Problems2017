#!/usr/local/bin/pypy3
# -*- coding: utf-8 -*-

INF = 1234567890

def solve():
    N,x = map(int,input().split())

    a = [0 for _ in range(N)]
    b = [0 for _ in range(N)]
    c = [0 for _ in range(N)]
    y = [0 for _ in range(N)]

    for i in range(N):
        a[i],b[i],c[i],y[i] = map(int,input().split())

    dp = [[[INF for i in range(51)] for j in range(51)] for k in range(101)]
    dp[0][0][0] = 0

    for pen in range(2*x+1):
        for apple in range(x+1):
            for pineapple in range(x+1):
                for i in range(N):
                    na,nb,nc = pen+a[i], apple+b[i], pineapple+c[i]
                    na = min(na,2*x)
                    nb = min(nb,x)
                    nc = min(nc,x)

                    dp[na][nb][nc] = min(dp[na][nb][nc], dp[pen][apple][pineapple]+y[i])

    ans = dp[2*x][x][x]
    return -1 if ans == INF else ans

def main():
    cases = int(input())
    for _ in range(cases):
        print(solve())

if __name__ == '__main__':
    main()
