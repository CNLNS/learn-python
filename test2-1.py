# _*_ coding:utf-8 _*_
#通风一班司建伟#
#学号1403050117#
#正在正在报警的警钟每隔0.5s响一声，坐在一列以60km/驶进警钟的人在5分钟#
#内能听到几响？空气中声速为340km/h。#
T=0.5
v=340
t=input("time(min)=")
Vr=input("V(km/s)=")
Vr=(Vr*1000)/3600
Vs=1.0/T
Vr=(v+Vr)*Vs
Vr=Vr/v
t=t*60
result=Vr*t
result=round (result)
print "times=",result