# -*- coding: utf-8 -*-
"""
Created on Sun Jul 17 16:07:24 2022

@author: 오정민
"""

# n = input().rstrip()
# # rstrip : 문자열에 오른쪽 공백이나 인자가된 문자열의 모든 조합을 제거

# s = set()

# for i in range(len(n) + 1):
#     for j in range(i, len(n)+1):
#         s.add(n[i:j])

# print(len(s)-1)


n = input()

s = set()

for i in range(len(n) + 1):
    for j in range(i, len(n)+1):
        s.add(n[i:j+1])
print(len(s)-1)
        

