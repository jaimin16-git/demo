t=int(input())
for i in range(t):
    step=0
    a,b,c,d=map(int,input().split())
    while (a//b)!=(c//d):
        if c!=a:
            c=c*a/c
            step+=1
        if d!=b:
            d=d*b/d
            step+=1
    print(step)
        
        
    