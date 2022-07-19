# -*- coding: utf-8 -*-
"""
Created on Mon Jul 18 14:27:33 2022

@author: 오정민
"""

import sys
input = sys.stdin.readline

n,m = map(int, input().split())
s = set([input() for _ in range(n)])

count =0

for _ in range(m):
    t = input()
    if t in s:
        count = count + 1
print(count)


    