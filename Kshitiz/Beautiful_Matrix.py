l=[]
for i in range(5):
	a=list(map(int,input().split()))
	l.append(a)
	if 1 in a:
		n=[i,a.index(1)]
if (n[0]!=2) or (n[1]!=2) :
	x=2-n[0]
	y=2-n[1]
	print(abs(x)+abs(y)
else:
	print(0)
