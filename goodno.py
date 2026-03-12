def gcd(a,b):
    if(b==0):
        return a
    else:
        return gcd(b,a%b)
t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    ans=gcd(a,b)
    if(ans==1):
        print("Finite")
    else:
        print("Infinite")