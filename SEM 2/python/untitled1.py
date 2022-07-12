# -*- coding: utf-8 -*-
"""
Created on Fri Mar  5 11:39:11 2021

@author: 20pw33
"""
sum1=0
sum2=0
chesses=["Miacheal","Trevor","Franklin"]
for c in chesses:
    print(c)
    num=[1,2,3,4,5,6]
    for i in range(len(num)):
        sum1=sum1+num[i]
        num[i]=num[i]*2
        sum2=sum2+num[i]
print(num)
print(sum1,sum2)
c=sum2-sum1
print(c)