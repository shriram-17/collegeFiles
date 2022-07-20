# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
import numpy as np
import pandas as pd

# read specific columns of csv file using Pandas
df = pd.read_csv(r"Z:\\SEM 5\\20XW58 MACHINE LEARNING LAB\ml\20pw.csv")

print(df['heights'].mean())

boxplot=df.boxplot(figsize=(5,5))

q1=np.percentile(df,25)
q3=np.percentile(df,75)

IQR=q3-q1

lower=q1-1.5*IQR

upper=q3+1.5*IQR

print(lower,upper)