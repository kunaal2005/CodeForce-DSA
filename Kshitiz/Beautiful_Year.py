def is_distinct(a):
	a=list(str(a))
	x={'0':0,'1':0,'2':0,'3':0,'4':0,'5':0,'6':0,'7':0,'8':0,'9':0}
	for i in a:
		x[i]+=1
	if max(x.values())>1:
		return False
	else:
		return True
n=int(input())
while True:
	n+=1
	if is_distinct(n)==True:
		print(n)
		break
