n = int(input())
k = int(input())
a = list()
for i in range(n) :
    for j in range(n) :
        a.append((i+1)*(j+1))
    a.sort()
    if not (n*n<=k) :
        print(a[k])
    k-=n
a.sort()
print(a[k-1])