# s,m=input().lower(),input().lower()
# if s>m:
# 	print(1)
# elif s<m:    #Correct but what good!!
# 	print(-1)
# else:
# 	print(0)

def cmp(a, b):
    return (a > b) - (a < b) 
print(str(cmp(input().lower(), input().lower())))

