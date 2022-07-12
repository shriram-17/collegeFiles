# -*- coding: utf-8 -*-
"""
Created on Tue Mar  2 11:45:56 2021

@author: 20pw33"""
for i in range(1,100):
    for j in range(1,100):
        for k in range(1,100):
           if  i**2+j**2==k**2:
               print(i,j,k)