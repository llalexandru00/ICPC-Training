n = int(input())

v = list(map(int, input().split()))

ans = []

for i in range(0, len(v)):
    if v[i] == 1 and i>0:
        ans.append(v[i-1])

ans.append(v[len(v)-1])


print(len(ans))
print(' '.join(map(str, ans)))