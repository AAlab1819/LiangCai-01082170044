n, l = map(int, input().split())
lantern_location = [int(i) for i in input().split()]
lantern_location.sort()
highest_gap = 0

for i in range(len(lantern_location)-1):
    if (lantern_location[i+1]-lantern_location[i]) > highest_gap:
        highest_gap = lantern_location[i+1]-lantern_location[i]

print( max( lantern_location[0], highest_gap/2, (l-lantern_location[len(lantern_location)-1]) ) )