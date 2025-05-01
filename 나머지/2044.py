in_ = input()
ans = list()
for i in in_ :
    if i == '1' or i=='2' or i=='0' :
        ans.append(i)
    elif i == 'A' :
        ans.pop(-1)
    elif i == 'B' :
        ans.pop(-1)
        ans.pop(-1)
    elif i == 'C' :
        ans = []
for i in ans :
    print(i, end='')
