t=int(input())
for i in range(t):
    n=int(input())
    a=input()
    m=int(input())
    b=input()
    c=input()
    dima=""
    vlad=""
    for i in range(len(c)-1,-1,-1):
        if (c[i]=="D"):
            dima=b[i]+dima
        else:
            vlad=vlad+b[i]
    print(vlad+a+dima)