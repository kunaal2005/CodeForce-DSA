s=sorted(list(input()))
x,a,n=0,0,len(s)
while x<n:
	sn=s.count(s[x])
	if sn>1:
		x+=sn
	else:
		x+=1
	a+=1
if a%2==0:
	print('CHAT WITH HER!')
else:
	print('IGNORE HIM!')


