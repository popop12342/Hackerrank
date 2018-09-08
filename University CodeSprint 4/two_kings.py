#!/bin/python3

import os
import sys


def imprime(t):
    for i in range(8):
        l = ' '.join(t[i])
        print(l)

def quantosM(t, x, y):
    if (t[x][y].isupper()):
        return 0

    total = 0
    for i in range(8):
        for j in range(8):
            if (t[i][j] in ["k", "q", "m"]):
                if (i == x or j == y or abs(i-x) == abs(j-y)):
                    if (i == x and j == y):
                        continue
                    total += 1
    return total

def melhor_rainha(t):
    melhor = 0
    melhor_x = 0
    melhor_y = 0

    for x in range(8):
        for y in range(8):
            if (t[x][y] == "k"):
                continue
            ms = quantosM(t, x, y)
            if (ms > melhor):
                melhor = ms
                melhor_x = x
                melhor_y = y
    
    print(melhor)
    if (t[melhor_x][melhor_y] == "m"):
        t[melhor_x][melhor_y] = "q"
    else :
        t[melhor_x][melhor_y] = "Q"
    for i in range(8):
        for j in range(8):
            if (i == melhor_x or j == melhor_y or abs(i-melhor_x) == abs(j-melhor_y)):
                if (t[i][j] == "k"):
                    t[i][j] = "K"
                if (t[i][j] == "q"):
                    t[i][j] = "Q"
                if (not (t[i][j].isupper() or (i == melhor_x and j==melhor_y))):
                    t[i][j] = "+"
                
    return melhor_x, melhor_y

def isM(t):
    ism = False
    for i in range(8):
        for j in range(8):
            if t[i][j] == "m":
                ism = True
    return ism

def checkmate(x1, y1, x2, y2):
    # Print the answer as described in the output section.
    tabuleiro = [["_" for _ in range(8)] for _ in range(8)]

    tabuleiro[x1][y1] = "k"
    tabuleiro[x2][y2] = "k"

    # marcar movimento dos reis
    for i in range(x1 - 1, x1 + 2):
        for j in range(y1 - 1, y1 + 2):
            if 0 <= i < 8 and 0 <= j < 8 and tabuleiro[i][j] == "_":
                tabuleiro[i][j] = "m"
    for i in range(x2 - 1, x2 + 2):
        for j in range(y2 - 1, y2 + 2):
            if 0 <= i < 8 and 0 <= j < 8 and tabuleiro[i][j] == "_":
                tabuleiro[i][j] = "m"    

    # posicionar melhor rainha
    qqt = 0
    while(isM(tabuleiro)):
        qqt += 1
        melhor_rainha(tabuleiro)
        imprime(tabuleiro)
        print("==================")

    print(qqt)
    for i in range(8):
        for j in range(8):
            if tabuleiro[i][j] == "Q":
                print("Q {} {}".format(i, j))

    imprime(tabuleiro)        

if __name__ == '__main__':
    t = int(input())

    for t_i in range(t):
        x1y1x2y2 = input().split()

        x1 = int(x1y1x2y2[0])
        y1 = int(x1y1x2y2[1])
        x2 = int(x1y1x2y2[2])
        y2 = int(x1y1x2y2[3])

        checkmate(x1, y1, x2, y2)

