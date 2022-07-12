# -*- coding: utf-8 -*-
"""
Created on Tue Mar  2 11:58:20 2021

@author: 20pw33
"""

list=[2,4,6,8,10]
a=max(list)
b=min(list)
print(a)
print(b)
for i,x in enumerate(list):
    list[i]=(x-b)/(a-b)
print(list)