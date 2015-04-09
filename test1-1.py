#-*- coding:utf-8 -*-
#姓名：司建伟
#学号：1403050117
#班级：通风一班
import math 
n=input('n=')
x=input('x=')
a0=1
c=0
ai=0
for i in range (1,n+1):
	b=i-1
	ai=ai*b+1
	c=c+ai*(x**i)
print 'f(',n,',',x,')=',c
