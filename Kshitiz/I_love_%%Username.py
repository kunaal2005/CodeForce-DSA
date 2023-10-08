# n=int(input())
# l=list(map(int,input().split()))
# a=0
# b=l[1]
# w=l[1]
# for i in range(0,n):
# 	if l[i]<w:
# 		a+=1
# 		w=l[i]
# 	if l[i]>b:
# 		a+=1
# 		b=l[i]
# print(a)
n=int(input())
p=list(map(int,input().split()))
a=0
print(sum(1 for i in range(1,n)if max(p[:i])<p[i] or min(p[:i])>p[i]))

# for i in range(1,n): # for understanding above line
# 	print('max',max(p[:i]),'min',min(p[:i]), 'pi',p[i])
# 	if p[i]>max(p[:i]) or p[i]<min(p[:i]):
# 		a+=1
# print(a)