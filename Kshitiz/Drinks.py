n=int(input())
l=list(map(int,input().split()))
t=0
vf=0
for i in range(0,len(l)):
	t+=1
	vf+=l[i]/100
	
print(vf/t*100)