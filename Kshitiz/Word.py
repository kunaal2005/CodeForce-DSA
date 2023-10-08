s=input()
up=0
low=0
for i in range(len(s)):
	if s[i].isupper()==True:
		up+=1
	else:
		low+=1
if up>low:
	s=s.upper()
else:
	s=s.lower()
print(s)