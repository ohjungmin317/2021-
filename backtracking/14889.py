# -*- coding: utf-8 -*-
"""
Created on Fri Aug 19 16:07:24 2022

@author: 오정민
"""
# 14889 - 스타트와 링크 
# 1) n명을 n/2명으로 구성된 2개의 팀으로 나눈다.
# 2) 각 팀을 두명씩 추출해서 힘을 계산하고 -> 2중 for문을 이용하여 중복되지 않게 2명씩 추출
# 3) 각 팀의 총 힘을 구하고 빼주면 된다. -> min (결과값 abs(a값 - b값))

import sys
input = sys.stdin.readline


n = int(input())

arr = [list(map(int, input().split())) for _ in range(n)]

visited = [False for _ in range(n+1)]

result = int(1e9)

def solve(depth, idx):
    global result
    
    if depth == n//2:
        p1,p2=0,0
        for i in range(n):
            for j in range(i+1, n):
                if visited[i] and visited[j]:
                    p1 += ( arr[i][j] + arr[j][i] )
                elif not visited[i] and not visited[j]:
                    p2 += ( arr[i][j] + arr[j][i] )
        
        result = min(result, abs(p1-p2))
        return
    
    for i in range(idx, n):
        if not visited[i]:
            visited[i] = True
            solve(depth+1, i+1)
            visited[i] = False
                    

solve(0,0)

print(result)