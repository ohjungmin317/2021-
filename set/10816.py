# -*- coding: utf-8 -*-
"""
Created on Sun Jul 17 16:42:59 2022

@author: 오정민
"""

from collections import Counter

# Counter : python에서 제공해주는 데이터의 개수를 세주는 함수(list일 때 가능)

# 1) 추가된 리스트를 누적하여 세는 법
# -> value.update
# 2) 가장 많이 나타난 데이터 출력
# -> value.most_common 

input()

a = list(map(int,input().split())) # list로 사용을 해줘야 한다. [배열 이용]

input()

b = list(map(int,input().split()))

count = Counter(a)

for i in b:
    if i in count:
        print(count[i], end=' ')
        
    else:
        print(0, end=' ')
        
print('\n')
print(count.most_common(n=2))