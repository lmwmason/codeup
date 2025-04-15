n = int(input())
farm_name = list()
farm_weight = list()
farm_weight_sorted = list()
for i in range(n) :
    a,b = input().split()
    b = float(b)
    farm_name.append(a)
    farm_weight.append(b)
    farm_weight_sorted.append(b)
farm_weight_sorted.sort(reverse=True)
for i in range(n) :
    print(farm_name[i], farm_weight_sorted.index(farm_weight[i])+1)
