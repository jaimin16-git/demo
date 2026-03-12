q=int(input())
for i in range(0,q):
    length=int(input())
    s,t=input().split()
    y=1
    for e in s:
        x=s.count(e)
        if e in t and t.count(e)==x:
            y=0
        else:
            y=1
            break
    if(y==0):
        print("YES")
    else:
        print("NO")
    