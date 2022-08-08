# -*- coding: utf-8 -*-
"""
Created on Mon Aug  8 21:31:31 2022

@author: 오정민
"""

#3036 - 링
# 유클리드호제 방법을 사용하고 
# 기약분수일때 조건을 사용해야하는데 -> format 함수를 사용하거나
# import Fractions을 이용하여 기약분수 형태로 알아서 변환을 해준다. 


import math
from fractions import Fraction

num = int(input())

arr = list(map(int, input().split()))

def GCD(a,b):
    while(b!=0):
        n = a%b
        a = b
        b = n
    return a

for i in range(num-1):
    # g = GCD(arr[0], arr[i])
    # print('{0}/{1}'.format(arr[0]//g,arr[i]//g))
    
    res = Fraction(arr[0], arr[i+1])
    
    print(f'{res.numerator}/{res.denominator}')
    

# https://kiffblog.tistory.com/171