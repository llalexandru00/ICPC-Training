c = float(input())
n = int(input())
tot = 0
for i in range(0, n):
    x, y = map(float, input().split())
    tot = tot + x*y*c
print(tot)
