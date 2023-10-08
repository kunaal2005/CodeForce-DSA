n=int(input())
left=[]
right=[]
t=0
for i in range(n):
	a,b=map(int,input().split())
	left.append(a)
	right.append(b)
lo=left.count(1)
lc=n-lo
ro=right.count(1)
rc=n-ro
if lo>=lc:
	t+=lc
else:
	t+=lo
	# t+=lc
if ro>=rc:
	# t+=lo
	t+=rc
else:
	t+=ro
print(t)

