n=int(input())
a=str(n)
l=0
for i in range(len(a)):
	if a[i] in '47':
		l+=1
if l==4 or l==7:
	print('YES')
else:
	print('NO')