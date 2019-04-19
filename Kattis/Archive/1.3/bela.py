x, y = input().split()
x = int(x)

d = {'A': 11, 'K': 4, 'Q': 3, 'J': 2, 'T': 10, '9': 0, '8': 0, '7': 0}
D = {'A': 11, 'K': 4, 'Q': 3, 'J': 20, 'T': 10, '9': 14, '8': 0, '7': 0}


tot = 0
for i in range(0, 4*x):
    a = input()
    if a[1] == y:
        tot = tot + D[a[0]]
    else:
        tot = tot + d[a[0]]

print(tot)