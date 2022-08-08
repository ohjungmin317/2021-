# -*- coding: utf-8 -*-
"""
Created on Mon Aug  8 20:10:05 2022

@author: 오정민
"""

X = int(input())
N = int(input())

x=0

for i in range(N):
    a,b = map(int,input().split())
    c = a*b
    x = x + c

if X == x:
    print("Yes")
else:
    print("No")
