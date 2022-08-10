# -*- coding: utf-8 -*-
"""
Created on Wed Aug 10 14:59:54 2022

@author: 오정민
"""
# 1010 - 다리 놓기 

from math import factorial as fact

def binomial(n,r):
    return fact(n) // fact(r) // fact(n-r)

T = int(input())

for i in range(T):
    N,K = map(int, input().split())
    
    if N < K:
        print(binomial(K, N))

    else:
        print(binomial(N, K))
