t=int(input())
for i in range(0,t):
    n=int(input())
    a=[int(x) for x in input().split()]
    b=0
    l1=[]
    l2=[]
    for e in a:
        if e%2!=0:
            l1.append(e)
        else:
            l2.append(e)
    l1.sort(reverse=False)
    l3=l1+l2
    s2=0
    sum1=0
    for e in l2:
        s2=s2+e
    for i in range(0,len(l3)):
        if l3[i]%2!=0:
            if b==0:
                b=1
                c=l3[i]
                sum1=sum1+c
            if b==1 and l3[i+1]%2==0:
                sum1=sum1+s2
    print(sum1)     

