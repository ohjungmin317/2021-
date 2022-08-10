# -*- coding: utf-8 -*-
"""
Created on Wed Aug 10 17:06:58 2022

@author: 오정민
"""
# 딕셔너리로 해결 
num = int(input())

for i in range(num):
    n = int(input())
    clothedict = {}
    for j in range(n):
        wear = list(input().split())
        if wear[1] in clothedict:
            clothedict[wear[1]].append(wear[0])
        
        else:
            clothedict[wear[1]] = [wear[0]]
    
    count = 1
    
    for k in clothedict:
        count *= (len(clothedict[k])+1)
    
    print(count - 1)
    

# Counter collections 사용하여 해결 
from collections import Counter

num = int(input())

for i in range(num):
    n = int(input())
    clothe=[]
    for j in range(n):
        p,w = input().split()
        clothe.append(w)
        
    clothe_Counter = Counter(clothe)
    
    count = 1
    
    for k in clothe_Counter:
        count *= clothe_Counter[k] + 1
    
    print(count - 1)


# 참고 : https://hongcoding.tistory.com/60
    
