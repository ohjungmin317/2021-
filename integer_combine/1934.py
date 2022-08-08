# -*- coding: utf-8 -*-
"""
Created on Mon Aug  8 21:27:58 2022

@author: 오정민
"""

# 1934 - 최소공배수 

import math

n = int(input())

def lcm(x,y):
    return x*y // math.gcd(x, y)

for i in range(n):
    n,m=map(int,input().split())
    print(lcm(n,m))
