s=input()
# print(s[2])
a=''
i=0
while i<len(s):
	if s[i]=='.':
		a+='0'
	else:
		if s[i+1]=='-':
			a+='2'
		else:
			a+='1'
		i+=1
	i+=1

	
print(a)
