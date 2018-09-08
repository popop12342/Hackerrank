#!/bin/python3

import sys

def div(k, arr):
    if (len(arr) <= 1):
        return False
    
    for n in arr:
        arr2 = arr.copy()
        arr2.remove(n)
        for m in arr2:
            if ((m + n) % k == 0):
                #print(n, m)
                return False
    return True

def subs(arr, ordem):
    if (ordem == 0):
        return arr
    else:
        subarrs = []
        for n in arr:
            sub = arr.copy()
            sub.remove(n)
            if (ordem == 1):
                subarrs.append(subs(sub, ordem-1))
            else:
                subarrs.extend(subs(sub, ordem-1))
        return subarrs
    
def nonDivisibleSubset(k, arr):
    if div(k, arr):
        return len(arr)
    
    for i in range(1, len(arr)-1):
        subarrs = subs(arr, i)
        for sub in subarrs:
            print(sub)
            if div(k, sub):
                print(sub)
                return len(sub)

    return 0
    

if __name__ == "__main__":
    n, k = input().strip().split(' ')
    n, k = [int(n), int(k)]
    arr = list(map(int, input().strip().split(' ')))
    result = nonDivisibleSubset(k, arr)
    print(result)

