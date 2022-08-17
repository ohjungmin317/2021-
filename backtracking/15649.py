# -*- coding: utf-8 -*-
"""
Created on Wed Aug 17 16:34:00 2022

@author: 오정민
"""

n,m = map(int, input().split())

s = []

def dfs():
    if len(s) == m:
        print(' '.join(map(str,s)))
        return
    
    for i in range(1, n+1):
        if i not in s:
            s.append(i)
            dfs()
            s.pop()
dfs()
    