#!/bin/python3

import os
import sys



def are_permutations(str1, str2):
    perm = {'a': 0, 'b': 0, 'c': 0, 'd': 0, 'e': 0, 'f':0, 'g':0, 'h':0,'i':0,'j':0,'k':0,'l':0,'m':0,'n':0,'o':0,'p':0,'q':0,'r':0,'s':0,'t':0,'u':0,'v':0,'w':0,'x':0,'y':0,'z':0}
    for char in str1: 
        perm[char] += 1
    for char in str2: 
        perm[char] -= 1
    
    soma = 0
    for v in perm.values():
        soma += abs(v)
    return soma == 0

def maximumPermutation(w, s):
    occ = {}
    
    for i in range(len(s) - len(w) + 1):
        sub = s[i:i+len(w)]
        if sub in occ:
            occ[sub] += 1
        else:
            occ[sub] = 1
        
    maximo = -1
    max_key = -1
    for key in occ:
        if (occ[key] >= maximo):
            if (are_permutations(key, w)):
                if (occ[key] == maximo):
                    if (key < max_key):
                        max_key = key
                else:
                    maximo = occ[key]
                    max_key = key
            #print(maximo, max_key"
    # if (max_key == "zzz"):
    #     max_key = -1
    
    return str(max_key)

if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_i in range(t):
        w = input()

        s = input()

        result = maximumPermutation(w, s)

        f.write(result + "\n")

    f.close()




