n = int(input())
v = list(map(int, input().split()))
f = [0 for i in range(0, 101)]
for i in v:
    f[i] = f[i] + 1
print(max(f))