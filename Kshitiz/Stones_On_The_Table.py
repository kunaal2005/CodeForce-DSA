n=int(input())
s=input()
a=1
c=0
while a<n:
	if s[a-1]==s[a]:
		c+=1
	a+=1
print(c)
