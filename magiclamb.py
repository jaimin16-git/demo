a,b=map(int,input().split())
count=1
l=[b]
while(a<b):
    if(b%2==0):
        b=b//2
    elif((b-1)%10==0):
        b=(b-1)//10
    else:
        break
    l.append(b)
    count+=1
if(b==a):
    print("YES")
    print(count)
    for i in range(len(l)):
        print(l[len(l)-1-i],end=' ')
else: print("NO")