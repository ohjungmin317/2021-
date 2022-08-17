# -*- coding: utf-8 -*-
"""
Created on Wed Aug 17 17:30:07 2022

@author: 오정민
"""

n,m = map(int, input().split())

s = []

def dfs():
    if len(s) == m:
        print(*s)
        return
    
    for i in range(1,n+1):
        s.append(i)
        dfs()
        s.pop()

dfs()