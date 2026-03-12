t=int(input())
for i in range(0,t):
    n,m,x,y=map(int,input().split())
    y1=[int(x) for x in input().split()]
    x1=[int(x) for x in input().split()]
    count1=0
    count2=0
    for i in range(0,m):
        if x>x1[i]:
            count1+=1
    for i in range(0,n):
        if y>y1[i]:
            count2+=1
print(count1+count2)
        
    