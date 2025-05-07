house_kind = input()
T = int(input())
X = int(input())
a,b = map(int, input().split())
M = a//b
W = int(input())
M-=T
if house_kind == 'A' : X*=10
elif house_kind == 'S' : X*=2
if M*W >= X : print('Yes')
else : print('No')
