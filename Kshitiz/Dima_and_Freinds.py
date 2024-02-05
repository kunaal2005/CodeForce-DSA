n=int(input())
sm=sum(i for i in map(int,input().split()))
# print(sm)
a=0
pos=[]
i=1
while i<=(5*(n+1)):
	
	pos.append(i)
	i+=n+1
# print(pos)
for x in range(1,6):
	if x+sm not in pos:
		# print(x)
		a+=1
print(a)