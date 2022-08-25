# -*- coding: utf-8 -*-
"""
Created on Thu Aug 25 18:43:30 2022

@author: 오정민
"""

# 9184 -  신나는 함수 실행
import sys
input = sys.stdin.readline


dp = [[[0] * 21 for _ in range(21)] for _ in range(21)]

def w(a, b, c):
    if a<=0 or b<=0 or c<=0:
        return 1
    if a>20 or b>20 or c>20:
        return w(20,20,20)
    
    if dp[a][b][c]:
        return dp[a][b][c] # dp 값이 있으면 바로 저장 -> 위 식이 없으면 시간초과가 난다.
    
    if a<b<c:
        dp[a][b][c] = w(a,b,c-1) + w(a,b-1,c-1) - w(a,b-1,c)
        return dp[a][b][c]
    dp[a][b][c] = w(a-1,b,c) + w(a-1,b-1,c) + w(a-1,b,c-1) - w(a-1,b-1,c-1)
    return dp[a][b][c]

while(True):
    a,b,c = map(int, input().split())
    if a == -1 and b == -1 and c == -1:
        break
    print(f'w({a}, {b}, {c}) = {w(a, b, c)}')
        
    