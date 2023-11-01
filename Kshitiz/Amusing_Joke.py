#FIRST METHOD

a,b,c=input(),input(),input()
x,y,z=len(a),len(b),len(c)
l=list(a+b)
if z==x+y:
	for i in c:
		if i in l:
			l.remove(i)
	if len(l)==0:
		print('YES')
	else:
		print('NO')
else:
	print('NO')

#SECOND METHOD

# a,b,c=input(),input(),input()
# x,y,z=len(a),len(b),len(c)
# if z==x+y:
# 	ans='YES'
# 	l=sorted(list(a+b))
# 	L=sorted(list(c))
# 	for i in range(z):
# 		if L[i]!=l[i]:
# 			ans='NO'
# 			break
# else:
# 	ans='NO'
# print(ans)