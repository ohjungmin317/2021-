# -*- coding: utf-8 -*-
"""
Created on Mon Aug  8 21:08:49 2022

@author: 오정민
"""

# 1037 -  약수 
# 정렬된 수가 들어오기 때문에 그 중 가장 최대값과 최소값을 곱해주면 해당 약수에 대한 수가 나오게 된다.

num = int(input())

arr = list(map(int, input().split()))

max_arr = max(arr)

min_arr = min(arr)

print(max_arr*min_arr)

