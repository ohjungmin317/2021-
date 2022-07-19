# -*- coding: utf-8 -*-
"""
Created on Tue Jul 19 19:31:08 2022

@author: 오정민
"""

# set의 중복을 없대고 list로 받아와서 sort 해주면 된다.

n,m = map(int,input().split())

a = set()

for i in range(n):
    a.add(input())

b = set()

for i in range(m):
    b.add(input())

result_sort = sorted(list(a&b))

print(len(result_sort))

for i in result_sort:
    print(i)