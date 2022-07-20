# -*- coding: utf-8 -*-
"""
Created on Wed Jul 20 15:57:41 2022

@author: 오정민
"""


# https://rimkongs.tistory.com/130 -> 기하공식 참고 

w, h, x, y, p = map(int,input().split())

count=0

for i in range(p):
    a, b = map(int,input().split())
    
    if (((a-x)*(a-x)) + ((b-(y+h/2))*(b-(y+h/2))) <= ((h/2)*(h/2)) and a < x):
        count = count + 1
        
    
    if (a >= x and a <= x+w and b >= y and b <= y+h):
        count = count + 1
        
    
    if  (((a-(x+w))*(a-(x+w))) + ((b-(y+h/2))*(b-(y+h/2))) <= ((h/2)*(h/2)) and a > x+w):
        count = count + 1
        
        
print(count)
        
        

