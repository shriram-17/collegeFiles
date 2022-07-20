# -*- coding: utf-8 -*-
import pandas as pd

# read specific columns of csv file using Pandas
df = pd.read_csv(r"Z:\\SEM 5\\20XW58 MACHINE LEARNING LAB\ml\iris1.csv")

data=df.cov()
print("Covarience=",data)

data1=df.corr()
print("Correlation=",data1)

meanlength=df['sepal length in cm'].mean()
print(f"The mean of the sepal length is {meanlength}")

meanlength_of_sepal_width=df['sepal width in cm'].mean()
print(f"The mean of the sepal width is {meanlength_of_sepal_width}")

meanlength_of_petal_length=df['petal width in cm'].mean()
print(f"The mean of the petal height is {meanlength_of_petal_length}")

meanlength_of_petal_width=df['petal width in cm'].mean()
print(f"The mean of the petal width is {meanlength_of_petal_width}")

meidan=df['sepal length in cm'].median()
print(f"The  meadian of the sepal length is {meidan}")

meidanwidth_of_sepal_width=df['sepal width in cm'].median()
print(f"The  meadian of the sepal width is {meidanwidth_of_sepal_width}")

meidanwidth_of_petal_length=df['petal width in cm'].median()
print(f"The meadian of the petal height is {meidanwidth_of_petal_length}")

meiddanwidth_of_petal_width=df['petal width in cm'].median()
print(f"The  meadian of the petal width is {meiddanwidth_of_petal_width}")

mode=df['sepal length in cm'].mode()
print(f"The  mode of the sepal length is {mode}")

mode_of_sepal_width=df['sepal width in cm'].mode()
print(f"The  mode of the sepal width is {mode_of_sepal_width}")

mode_of_petal_length=df['petal width in cm'].mode()
print(f"The mode of the petal height is {mode_of_petal_length}")

mode_of_petal_width=df['petal width in cm'].mode()
print(f"The  mode of the petal width is {mode_of_petal_width}")

std=df['sepal length in cm'].std()
print(f"The  std of the sepal length is {std}")

std_of_sepal_width=df['sepal width in cm'].std()
print(f"The  std of the sepal width is {std_of_sepal_width}")

std_of_petal_length=df['petal width in cm'].std()
print(f"The std of the petal height is {std_of_petal_length}")

std_of_petal_width=df['petal width in cm'].std()
print(f"The  std of the petal width is {std_of_petal_width}")

kurt=df['sepal length in cm'].kurt()
print(f"The  kurt of the sepal length is {kurt}")

kurt_of_sepal_width=df['sepal width in cm'].kurt()
print(f"The  kurt of the sepal width is {kurt_of_sepal_width}")

kurt_of_petal_length=df['petal width in cm'].kurt()
print(f"The kurt of the petal height is {kurt_of_petal_length}")

kurt_of_petal_width=df['petal width in cm'].kurt()
print(f"The  kurt of the petal width is {kurt_of_petal_width}")

skew=df['sepal length in cm'].skew()
print(f"The  skew of the sepal length is {std}")

skew_of_sepal_width=df['sepal width in cm'].skew()
print(f"The  skew of the sepal width is {std_of_sepal_width}")

skew_of_petal_length=df['petal width in cm'].skew()
print(f"The skew of the petal height is {std_of_petal_length}")

skew_of_petal_width=df['petal width in cm'].skew()
print(f"The  skew of the petal width is {std_of_petal_width}")






