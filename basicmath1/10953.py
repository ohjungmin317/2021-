# -*- coding: utf-8 -*-
"""
Created on Wed Aug 24 18:45:04 2022

@author: 오정민
"""

T = int(input())

for i in range(T):
    a,b = map(int,input().split(','))
    
    result = a + b
    
    print(result)