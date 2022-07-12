# -*- coding: utf-8 -*-
"""
Created on Mon Mar  8 09:19:49 2021

@author: 20pw33
"""

def Abs(x):
    if x>=0:
        return x
    elif x<=0:
        return -x
    else:
        val=abs(x)
        return x
      


y=int(input("Enter the number:"))
y=Abs(y)
print("Absolute value is",y)
        
    