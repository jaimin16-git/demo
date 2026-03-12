k,r=map(int,input().split())
x=1
while((x*k-r)%10!=0 and (x*k)%10!=0):
    x+=1
print(x)