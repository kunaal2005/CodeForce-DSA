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

# SANTACLAUS
# DEDMOROZ
# SANTAMOROZDEDCLAUS