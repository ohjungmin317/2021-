# -*- coding: utf-8 -*-
"""
Created on Tue Jul 19 19:28:23 2022

@author: 오정민
"""

import sys
input = sys.stdin.readline # 문자열 입력 받을 때 시간 초과나지 않도록 하기 위해서 python 라이브러리 사용 
# -> not enough values to unpack (expected 2, got 0)


n,m = map(int,input().split())



# pokemon_name_dict = {}
# pokemon_num_dict = {}

#딕셔너리 생성 
dict = {}

for num in range(1, n+1):
    name = input().rstrip()
    dict[num] = name # 숫자를 입력 받으면 문자열 출력
    dict[name] = num # 문자열 입력 받으면 숫자 출력 

for i in range(m):
    question = input().rstrip() # 포켓몬 이름 입력 받음 
    
    if question.isdigit(): # 문자열에서 숫자인지 판별하여 숫자인 경우 출력 
        print(dict[int(question)])
    
    else:
        print(dict[question])