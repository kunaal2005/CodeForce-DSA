n,m=map(int,input().split())
a=list(map(int,input().split()))
l=0
for i in range(n):
	if a[i]>m:
		l=i
		a.append(a[i])
		a.pop(i)
		