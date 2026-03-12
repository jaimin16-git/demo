t=int(input())
for i in range(t):
    x,k=map(int,input().split())
    if(k!=1):
        if(x==1 and k==2):
            print("YES")
        else:
            print("NO")
    else:
        flag = True
        if x<=1:
            flag=False
        else:
            if(x<=1):
                print("NO")
            else:
                for i in range(2,int(x**0.5)+1):
                    if x%i==0:
                        flag = False
                        break
        if(flag):
            print("YES")
        else:
            print("NO")