# -*- coding: utf-8 -*-
"""
Created on Tue Aug  9 16:12:54 2022

@author: 오정민
"""

# 1676 - 팩토리얼 0의 개수

import math

num = int(input())

fact = math.factorial(num)

count = 0

for i in str(fact)[::-1]:
    if i !='0':  # 0이 끝날 때 까지 개수를 세주고 끝나면 break를 해주어야 한다. 
        break
    count = count + 1
print(count)




# 오답 // 반례로 답 찾음 

# import math

# num = int(input())

# fact = math.factorial(num)

# count = 0

# for i in str(fact)[::-1]:
#     if i !='0':
#         count = count + 1
# print(count)

# 반례 15 -> correct : 3  // answer : 4 