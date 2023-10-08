# x=[int(input()) for i in range(4)]
# d=int(input())
# dictt={}
# for p in range(1,d+1):
# 	dictt[p]=0

# for j in x:
# 	a=j
# 	while a<=d:
# 		dictt[a]+=1
# 		a+=j
# y=0
# for i in dictt:
# 	if dictt[i]==0:
# 		y+=1
# print(d-y)
l = [int(input()) for i in range(4)]
m = int(input())
a=set(i for i in range(1, m+1) for j in l if i % j == 0)
print(a)
print(len(a))