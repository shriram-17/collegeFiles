# -*- coding: utf-8 -*-
"""
Created on Tue Jul 19 15:04:23 2022

@author: 20pw33
"""
import numpy as np
import pandas as pd

# read specific columns of csv file using Pandas
df = pd.read_csv(r"Z:\\SEM 5\\20XW58 MACHINE LEARNING LAB\ml\iris1.csv")

print(df['sepal length in cm'].mean())

boxplot=df.boxplot(figsize=(5,5))

q1=np.percentile(df['sepal length in cm'],25)
q3=np.percentile(df['sepal length in cm'],75)

IQR=q3-q1

lower=q1-1.5*IQR

upper=q3+1.5*IQR
print("Sepal length in cm:")
print(f"The Lower Bound is {lower},The upper bound is {upper}")

q1=np.percentile(df['sepal width in cm'],25)
q3=np.percentile(df['sepal width in cm'],75)

IQR=q3-q1

lower=q1-1.5*IQR

upper=q3+1.5*IQR
print("Sepal Width in cm:\n")
print(f"The Lower Bound is {lower},The upper bound is {upper}")

q1=np.percentile(df['petal length in cm'],25)
q3=np.percentile(df['petal length in cm'],75)

IQR=q3-q1

lower=q1-1.5*IQR

upper=q3+1.5*IQR
print("Petal Height in cm:\n")
print(f"The Lower Bound is {lower},The upper bound is {upper}")

q1=np.percentile(df['petal width in cm'],25)
q3=np.percentile(df['petal width in cm'],75)

IQR=q3-q1

lower=q1-1.5*IQR

upper=q3+1.5*IQR
print("Petal Width in cm:\n")
print(f"The Lower Bound is {lower},The upper bound is {upper}")