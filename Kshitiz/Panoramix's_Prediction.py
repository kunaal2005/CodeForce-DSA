n,m=map(int,input().split())
def is_prime(x):
	a=True
	for i in range(2,x):
		if x%i==0:
			a=False
			break
	return a
if n==2 and m==3:
	print('YES')
else:
	if is_prime(m):
		flag=True
		for j in range(n+1,m):
			if is_prime(j)==True:
				print('NO')
				flag=True
				break
			else:
				flag=False
		if flag==False:
			print('YES')

	else:
		print('NO')
