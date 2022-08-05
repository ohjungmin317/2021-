# -*- coding: utf-8 -*-
"""
Created on Fri Aug  5 21:25:50 2022

@author: 오정민
"""

# 2477 참외밭 문제 

# 문제 해결 : 가장 큰 사각형에서 작은 사각형을 빼준 다음에 참외 개수를 곱해주면 된다.
# -> 동 / 서 => (1,2) | 남 / 북 -> (3,4)

K = int(input())

height = []
width = []
total = []

for i in range(6):
    direction, cm = map(int, input().split())
    if direction == 1 or direction == 2: # 방향 정해주기 1 / 2 -> 동 / 서
        width.append(cm)
        total.append(cm)
    else: # 3 / 4 -> 남 / 북 
        height.append(cm)
        total.append(cm)

bigsquare = max(width) * max(height) # -> 가장 최댓값이 큰 사각형 

# 작은 사각형 구하기 
maxhidx = total.index(max(height))
maxwidx = total.index(max(width))

smallbox1 = abs(total[maxhidx-1] - total[(maxhidx-5 if maxhidx == 5 else maxhidx +1 )])
smallbox2 = abs(total[maxwidx-1] - total[(maxwidx-5 if maxwidx == 5 else maxwidx +1 )])

total_area = bigsquare - (smallbox1*smallbox2)

total_fruite = total_area * K

print(total_fruite)

# https://velog.io/@holawan/%EB%B0%B1%EC%A4%80-2477%EC%B0%B8%EC%99%B8%EB%B0%AD-python

K = int(input())

pos = []

for i in range(6):
    direction, cm = map(int, input().split())
    pos.append(cm)

big_square = 0
small_square = 0

for i in range(6):
    tmp = pos[i] * pos[(i + 1) % 6]
    
    if big_square < tmp:
        big_square = tmp
        idx = i

small_square = pos[(idx + 3) % 6] * pos[(idx + 4) % 6]

total = big_square - small_square

print(total * K)

# https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=withsghong&logNo=222094684261
        