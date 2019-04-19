a, b, c = map(int, input().split())
tot = a*3 + b*2 + c
x = 0
y = 0
A = ["Province", "Duchy", "Estate"]
B = ["Gold", "Silver", "Copper"]

if tot >= 8:
    x = 1
elif tot >= 5:
    x = 2
elif tot >= 2:
    x = 3

if tot >= 6:
    y = 1
elif tot >= 3:
    y = 2
else:
    y = 3

if x == 0:
    print(B[y-1])
else:
    print(A[x-1] + " or " + B[y-1])
