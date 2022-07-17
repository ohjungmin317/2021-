# -*- coding: utf-8 -*-
"""
Created on Sun Jul 17 15:56:47 2022

@author: 오정민
"""

n,m = map(int, input().split())

a = set(map(int, input().split()))
b = set(map(int, input().split()))

print(len(a-b) + len(b-a))
