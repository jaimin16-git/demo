n,m=map(int,input().split())
l=list(map(int,input().split()))
l.sort()
min=float('inf')
for j in range(len(l)-n+1):
    y=(l[n-1+j]-l[j])
    if(y<min):
        min=y
print(int(min))