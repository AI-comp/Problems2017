#!/usr/local/bin/pypy3
# -*- coding: utf-8 -*-

def inner_circle(cx, cy, R, px, py):
    squared_dist = (cx-px)**2 + (cy-py)**2
    return squared_dist <= R**2

# def inner_rectangle(lx, ux, ly ,uy, px, py):
#     return lx <= px <= ux and ly <= py <= uy

def solve():
    # input
    N,M,L = map(int,input().split())

    # 開始点を最初のノケストップと見なす
    sx,sy = [],[]
    # sx,sy = [0],[0]
    for i in range(N):
        x,y = map(int,input().split())
        sx.append(x)
        sy.append(y)
    # N += 1

    mx,my = [],[]
    for i in range(M):
        x,y = map(int,input().split())
        mx.append(x)
        my.append(y)

    # 捕まえたノケモン
    caught = [0 for _ in range(M)]

    # ノケストップの周りをチェック
    for i in range(N):
        for j in range(M):
            if inner_circle(sx[i], sy[i], L, mx[j], my[j]):
                caught[j] = 1

    # ノケストップ間をチェック
    # for i in range(1,N):
    #     lx,ux = min(sx[i-1],sx[i]),max(sx[i-1],sx[i])
    #     ly,uy = min(sy[i-1],sy[i]),max(sy[i-1],sy[i])
    #
    #     if sx[i] == sx[i-1]:
    #         # y軸方向に移動
    #         lx -= L
    #         ux += L
    #     elif sy[i] == sy[i-1]:
    #         # x軸方向に移動
    #         ly -= L
    #         uy += L
    #     else:
    #         print('error')
    #         break
    #
    #     # この枠の中に入っていれば捕まえられる
    #     for j in range(M):
    #         if inner_rectangle(lx, ux, ly, uy, mx[j], my[j]):
    #             caught[j] = 1

    return sum(caught)

def main():
    cases = int(input())
    for _ in range(cases):
        print(solve())

if __name__ == '__main__':
    main()
