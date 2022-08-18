# -*- coding: utf-8 -*-
"""
Created on Thu Aug 18 15:38:44 2022

@author: 오정민
"""

# 9663
# n_queens : 상하좌우 / 대각선으로 칸수에 관계없이 움직일 수 있다.
# -> (1) 상하좌우 같은 줄에 이미 위치한 퀸이 있는가? 
# -> (2) 대각선의 같은 줄에 이미 위치한 퀸이 있는가?
# -> (3) 현재 놓은 퀸이 N번째(마지막) 퀸이 있는가? 

import sys
input = sys.stdin.readline

n = int(input())

count = 0
row = [0] * 15

def promising(x):
    for i in range(0,x):
        if row[x] == row[i] or abs(row[x] - row[i]) == abs(x - i):
            return False
    return True
    
def n_queen(x):
    global count
    if x == n:
        count = count + 1
        
    else:
        for i in range(n):
            row[x] = i
            if promising(x):
                n_queen(x+1)

n_queen(0)
print(count)
            
