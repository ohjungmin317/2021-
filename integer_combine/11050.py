# -*- coding: utf-8 -*-
"""
Created on Tue Aug  9 15:52:28 2022

@author: 오정민
"""

# 이항 계수1 

import math
from math import factorial as fact

N,K = map(int, input().split())

def binomial(n,r):
    return fact(n) // fact(r) // fact(n-r)

print(binomial(N, K))


# print(math.comb(N,K)) -> math 함수를 이용하여 comb python3.8 부터 사용이 가능하다. 
    