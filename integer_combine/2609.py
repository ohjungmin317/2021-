# -*- coding: utf-8 -*-
"""
Created on Mon Aug  8 21:14:02 2022

@author: 오정민
"""

# 2609 - 최대공약수 / 최소공배수

import math
n,m = map(int, input().split())

gcd = math.gcd(n, m)

# lcm = math.lcm(n, m)

def lcm(x,y):
    return x*y // math.gcd(x,y) 

print(gcd)
# print(lcm)
print(lcm(n,m))