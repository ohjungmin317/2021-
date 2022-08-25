# -*- coding: utf-8 -*-
"""
Created on Thu Aug 25 17:00:38 2022

@author: 오정민
"""

# 피보나치 수 - dp 방법으로 

n = int(input())

def fibo(x):
    if x == 1 or x == 2:
        return 1
    else:
        return fibo(x-1) + fibo(x-2)

def fibo2(x):
    dp = [0]*(x+1)
    dp[1],dp[2] = 1 ,1
    count = 0
    for i in range(3,n+1):
        count = count + 1
        dp[i] = dp[i-1] + dp[i-2]
    return count

print(fibo(n), fibo2(n))