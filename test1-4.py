# -*�� encoding:utf-8 -*-
#������˾��ΰ
#ѧ�ţ�1403050117
#�༶��ͨ��һ��'

import math
a=input('������a=')
b=input('������b=')
c=input('������c=')
d=b*b-4*a*c
if d<0:
	print 'No answer'
elif d==0:
	x1=b*(-1)
	x1=(x1)/(2*a)
	print 'x1=x2=',x1;
else:
	d1=b*(-1)+d
	d2=b*(-1)-d
	x1=d1/(2*a)
	x2=d2/(2*a)       
	print 'x1=',x1,'x2=',x2