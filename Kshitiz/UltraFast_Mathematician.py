a=list(input())
b=list(input())

n=''
for i in range(len(a)):
	# print('itr',i)
	if a[i]==b[i]:
		n=n+'0'
		# print('itrif',i)
	else:
		# print('itrelse',i)
		n=n+'1'
# n=int(n)
print(n)


