# def main():
#   n = int(input())
#   pos = [0] * (n + 1)
#   l=list(map(int,input().split()))
#   for i in range(n):
#     num = l[i]
#     pos[num] = i + 1

#   sum1 = 0
#   sum2 = 0
#   m = int(input())
#   j=list(map(int,input().split()))
#   for i in range(m):
#     q = j[i]
#     sum1 += pos[q]
#     sum2 += n - pos[q] + 1

#   print(sum1, sum2)

# if __name__ == '__main__':
#   main()



n=int(input())
arr=[0]*(n+1)
l=list(map(int,input().split()))
for i in range(n):
	num=l[i]
	arr[num]+=i+1

a,b=0,0
m=int(input())
k=list(map(int,input().split()))
for j in range(m):
	q=k[j]
	a+=arr[q]
	b+=n-arr[q]+1

print(a,b)


# # l=list(map(int,input().split()))
# # a,b=0,0
# # x=int(input())
# # e=list(map(int,input().split()))
# # for i in range(x):
# # 	q=l.index(e[i])
# # 	a+=q+1
# # 	b+=n-q
# # print(a,b)
			 



