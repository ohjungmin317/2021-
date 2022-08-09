# -*- coding: utf-8 -*-
"""
Created on Tue Aug  9 16:28:10 2022

@author: 오정민
"""

# 2004 - 조합 0의 개수

# 끝자리가 0 이기 때문에 무조건 2 와 5의 곱으로 이루어져 있다. -> 2와 5의 쌍을 구해 0의 개수를 구해주면 된다. 


def five(n):
    answer = 0
    while n != 0:
        n = n // 5
        answer = answer + n
    return answer

def two(n):
    answer = 0
    while n != 0:
        n = n // 2
        answer = answer + n
    return answer

n,m = map(int,input().split())

print(min(two(n) - two(n-m) - two(m), five(n) - five(n-m) - five(m)))


# 그냥 조합론으로 하였을 때에는 시간초과가 난다. 

# 0으로 나누어 떨어지기 때문에 2와 5로 이루어져 각각의 count의 개수를 세어 최솟값을 개수로 나타내면 된다. 