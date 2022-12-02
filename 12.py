s = int(input())
dd = s / 86400
s = s % 86400
 
hh = s / 3600
s = s % 3600
 
mm = s / 60
s = s % 60
print("%d:%02d:%02d:%02d"%(dd,hh,mm,s))
