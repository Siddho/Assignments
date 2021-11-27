#!/usr/bin/env python
# coding: utf-8

# In[1]:


#Assignemnet-1
#Circle
from math import pi
radius=float(input ("Input the radius of the circle : "))
print ("The area of the circle with radius " + " is: " + str(pi * radius**2))


# In[2]:


#File name Extension
Filename=input("Enter the Filename: ")
f_extns = Filename.split(".")
print ("The extension of the File is : " + repr(f_extns[-1]))


# In[12]:


#Assignment
#Python Program for Fibonacci numbers   Fn = Fn-1 + Fn-2
def Fibonacci(n):
    if n<0:
        print("Incorrect input")
    
    elif n==0:
        return 0
    
    elif n==1 or n==2:
        return 1
 
    else:
        return Fibonacci(n-1)+Fibonacci(n-2)
   


# In[ ]:




