t=int(input())
for i in range(t):
    r,x,d,n=map(int,input().split())
    initial=r
    final=r
    count=0
    st=input()
    for e in st:
        if e=='2' and x>initial:
            count+=1
            initial-=d
            final+=d
        elif e=='1':
            count+=1
            initial-=d
            final+=d
    print(count)
    