n,t=map(int,input().split())
s=list(input())
S=''
flag=False             
for i in range(t):
	x=0
	while x<len(s)-1:
			# print('sx',s[x],'sx+1',s[x-1])
		if (s[x]=='B') and (s[x+1]=='G'):
			s[x],s[x+1]=s[x+1],s[x]
			flag=True
			x+=1
		x+=1
			
		
for j in s:
	S+=j

print(S)



