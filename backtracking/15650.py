# -*- coding: utf-8 -*-
"""
Created on Wed Aug 17 17:13:33 2022

@author: 오정민
"""

n,m = map(int, input().split())

s = []

def dfs(start):
    if len(s) == m:
        print(*s)
        return
    
    for i in range(start, n+1):
        if i not in s:
            s.append(i)
            dfs(i+1)
            s.pop()

dfs(1)

# 기존에는 1부터 n까지 모든 숫자를 사용했지만 [2,1]과 같이 앞의숫자가 뒤의숫자보다 작은경우를 

# 제외하기위해 start부터 n까지 숫자를 사용한다.

# 재귀함수를 호출할때는 i를 이용하여 자신의 다음숫자를 부르게된다.