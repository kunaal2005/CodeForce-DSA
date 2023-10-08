# print(x for i in range(int(input())) x+1 if '+' in input() ) 
#NO SINGLE LINE CODE POSSIBLE 
x=0
for i in range(int(input())):
	x=x+1 if '+' in input() else x-1


	# if '+' in input():
	# 	x+=1
	# else:
	# 	x-=1

print(x)
