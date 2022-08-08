# -*- coding: utf-8 -*-
"""
Created on Mon Aug  8 20:19:00 2022

@author: 오정민
"""
# 25305번 - 커트라인 

N, k = map(int, input().split())

arr = list(map(int, input().split()))

arr.sort(reverse=True)

print(arr[k-1])