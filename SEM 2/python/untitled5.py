# -*- coding: utf-8 -*-
"""
Created on Fri Mar  5 11:50:05 2021

@author: 20pw33"""
fact =1
num=int(input("Enter the Factorial:"))
if num<0:
    print("FACTORIAL DOES NOT EXIST FOR NEGATIVE NUMBERS ")
elif num==0:
    print("FACTORIAL DOES NOT EXIST FOR ZERO")  
else:
    for i in range(1,num+1):
            fact=fact*i
print(fact)    