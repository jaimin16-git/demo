k=int(input())
l=int(input())
m=int(input())
n=int(input())
d=int(input())

x = set()

for i in [k, l, m, n]:
    x.update(range(i, d+1, i))

print(len(x))praCTICE