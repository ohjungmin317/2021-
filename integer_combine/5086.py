# -*- coding: utf-8 -*-
"""
Created on Mon Aug  8 20:49:26 2022

@author: 오정민
"""

# 배수와 약수 

while True:
    n,m = map(int, input().split())
    
    if n==0 and m==0:
        break
    elif n % m == 0:
        print("multiple")
    elif m % n == 0:
        print("factor")
    else:
        print("neither")

