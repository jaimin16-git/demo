n=int(input())
l=list(map(int,input().split()))
l.sort()
x=max(l)
neg=0
for i in range(len(l)):
    if(l[i]<0):
        neg+=1
    else:
        break
if(x<=0 and neg<=1):
    print(x)
elif(neg%2==0):
    for k in range(len(l)-1,-1,-1):
        print(l[k],end=" ")
else:
    i=len(l)-1
    while(i>=0 and l[i]>=0):
        print(l[i],end=" ")
        i-=1
