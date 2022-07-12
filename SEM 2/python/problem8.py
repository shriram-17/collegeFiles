# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file
"""
def encrypt(text,s): 
    result = "" 
  
     
    for i in range(len(text)): 
        char = text[i]
  
        
        if (char.isupper()): 
            result += chr((ord(char) + s-65) % 26 + 65) 
  
 
        else: 
            result += chr((ord(char) + s - 97) % 26 + 97) 
  
    return result 
  

text =input("Enter the Text:")
s= input("Enter the no of postions you want to shift: ")
print ("Text  : " + text) 
print ("Shift : " + str(s)) 
print ("Cipher: " + encrypt(text,s)) 