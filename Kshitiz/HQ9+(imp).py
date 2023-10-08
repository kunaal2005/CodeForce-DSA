# f=False WRONG
# for i in input():
# 	if i in "HQ9+":
# 		print('YES')
# 		f=True
# 		break
# if f==False:
# 	print('NO')

# for i in input(): WRONG
# 	print('YES' if i in 'HQ9+' else 'NO')

print(str(["NO", "YES"][any([c in "HQ9" for c in input()])]))
# print(str(["NO", "YES"][False]))
# print(['No','Yes'][False])