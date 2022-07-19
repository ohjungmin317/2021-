# -*- coding: utf-8 -*-
"""
Created on Tue Jul 19 15:52:50 2022

@author: 오정민
"""

# 첫째 줄에는 도감에 수록되어 있는 포켓몬의 개수 N이랑 내가 맞춰야 하는 문제의 개수 M이 주어져. 
# N과 M은 1보다 크거나 같고, 100,000보다 작거나 같은 자연수인데, 자연수가 뭔지는 알지? 
# 모르면 물어봐도 괜찮아. 나는 언제든지 질문에 답해줄 준비가 되어있어.

# 둘째 줄부터 N개의 줄에 포켓몬의 번호가 1번인 포켓몬부터 N번에 해당하는 포켓몬까지 
# 한 줄에 하나씩 입력으로 들어와. 포켓몬의 이름은 모두 영어로만 이루어져있고, 
# 또, 음... 첫 글자만 대문자이고, 나머지 문자는 소문자로만 이루어져 있어. 
# 아참! 일부 포켓몬은 마지막 문자만 대문자일 수도 있어. 포켓몬 이름의 최대 길이는 20, 최소 길이는 2야. 
# 그 다음 줄부터 총 M개의 줄에 내가 맞춰야하는 문제가 입력으로 들어와. 문제가 알파벳으로만 들어오면 포켓몬 번호를 말해야 하고, 숫자로만 들어오면, 포켓몬 번호에 해당하는 문자를 출력해야해. 입력으로 들어오는 숫자는 반드시 1보다 크거나 같고, N보다 작거나 같고, 
# 입력으로 들어오는 문자는 반드시 도감에 있는 포켓몬의 이름만 주어져. 그럼 화이팅!!!

import sys
input = sys.stdin.readline() # 문다열을 빨리 입력 받기 위해 -> 시간초과가 나지 않는다.
# -> not enough values to unpack (expected 2, got 0)


n,m = map(int,input().split()) 



# pokemon_name_dict = {}
# pokemon_num_dict = {}

dict = {} # -> 딕셔너리 사용해야 한다. : 숫자랑 문자를 한꺼번에 저장을 해야 해서 

for num in range(1, n+1):
    name = input().rstrip() # 포켓몬 이름을 받아오는 것 
    dict[num] = name # dict에서 숫자인 경우에는 문자열 출력
    dict[name] = num # dict에서 문자인 경우에는 숫자 출력 

for i in range(m):
    question = input().rstrip() # m에 해당하는 검색하려는 숫자나 포켓몬 이름 입력 
    
    if question.isdigit(): # 해당 문자가 숫자인 경우에는 
        print(dict[int(question)]) #딕셔너리에 숫자 출력 
    
    else: # 그 외 인것은 문자 출력 
        print(dict[question])