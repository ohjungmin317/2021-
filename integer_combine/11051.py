# -*- coding: utf-8 -*-
"""
Created on Tue Aug  9 16:04:26 2022

@author: 오정민
"""

# 11051 - 이항계수2

import math

N,K = map(int, input().split())

print(math.comb(N,K) % 10007)