# a=0    #correct but no good
# for i in range(int(input())):
# 	l=list(map(int,input().split()))
# 	if l.count(1)>l.count(0):
# 		a+=1
# print(a)

print(sum(1 for i in range(int(input())) if input().count('1')>1))
