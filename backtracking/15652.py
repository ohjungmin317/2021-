# -*- coding: utf-8 -*-
"""
Created on Wed Aug 17 18:47:46 2022

@author: 오정민
"""

n,m = map(int, input().split())

s = []

def dfs(start):
    if len(s) == m:
        print(*s)
        return
    
    for i in range(start, n+1):
        s.append(i)
        dfs(i)
        s.pop()

dfs(1)
        
    