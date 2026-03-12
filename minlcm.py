t=int(input())
for i in range(t):
    n=int(input())
    if(n%2==0):
        x=int(n/2)
        print(f"{x} {x}")
    else:
        x=1
        for i in range(2,int(n**0.5)+1):
            if(n%i==0):
                x=n//i
                break
        y=n-x
        print(f"{x} {y}")