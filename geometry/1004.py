# -*- coding: utf-8 -*-
"""
Created on Tue Aug  2 19:54:30 2022

@author: 오정민
"""

# 어린왕자 
# 해설 : https://cocoon1787.tistory.com/350 -> 공식 

import math

T = int(input())

for _ in range(T):
    x1, y1, x2, y2 = map(int, input().split())
    n = int(input())
    count=0
    
    for _ in range(n):
        cx, cy, r = map(int, input().split())
        
        d1 = (((x1-cx)**2) + ((y1-cy)**2))
        d2 = (((x2-cx)**2) + ((y2-cy)**2))
        
        sq_d1=math.sqrt(d1)
        sq_d2=math.sqrt(d2)
        
        if(sq_d1<r and sq_d2>r) or (sq_d1>r and sq_d2<r):
            count = count+1
    
    print(count)

# i) 두 원이 두 점에서 만나는 경우

#    두 반지름의 합이 두 점 사이의 거리의 합보다 크고, 두 반지름의 차가 두점 사이의 거리의 합보다 작아야 한다. (한 원이 다른 원 안에 있는 경우)

 

# ii) 두 원이 한 점에서 만나는 경우

#    두 반지름의 합이 두 점 사이의 거리의 합과 같거나 두 반지름의 차가 두 점 사이의 거리의 합과 같다. ( i)와 마찬가지로 한 원이 다른 원 안에 있을 수 있음.)

 

# iii) 두 원이 만나지 않는 경우

#     i), ii) 케이스의 나머지 케이스들이라고 생각하면 된다.


# 파이썬에서 루트 나타내는 법

# ex 루트 2

# 루트 2 == 2의 1/2이다. -> 2**(1/2) or math.h 사용하여 sqrt(자연수) 
