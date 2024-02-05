n=int(input())
bnl=list(map(int,input().split()))
mini=min(bnl)
maxi=max(bnl)
n1,n2=0,0
bn=maxi-mini

for i in range(n):
    if bnl[i]==maxi:
        n1+=1
    elif bnl[i]==mini:
        n2+=1
if mini==maxi:
    print(maxi-mini, int(n*(n-1)/2))
else:
    print(maxi-mini, n1*n2)


