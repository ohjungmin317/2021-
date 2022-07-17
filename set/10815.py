# -*- coding: utf-8 -*-
"""
Created on Sun Jul 17 16:29:19 2022

@author: 오정민
"""

input()

a = set(map(int,input().split()))

input()

b = list(map(int,input().split()))

for i in b:
    if i in a:
        print(1, end=' ')
        
    else:
        print(0, end=' ')