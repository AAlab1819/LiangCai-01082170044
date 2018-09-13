final_lvl = int(input())
little_x = [int(i) for i in input().split()]
del little_x[0]
little_y = [int(i) for i in input().split()]
del little_y[0]

for i in little_y:
    little_x.append(i)
little_x = list(set(little_x))
if len(little_x) < final_lvl:
    print("Oh, my keyboard!")
else:
    if little_x[len(little_x)-1] < final_lvl:
        print("Oh, my keyboard!")
    else:
        print("I become the guy.")