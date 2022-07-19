# -*- coding: utf-8 -*-
"""
Created on Tue Jul 19 19:30:26 2022

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