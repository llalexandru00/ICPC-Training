n = int(input())
sum = 0
for i in range(0, n):
    a, b = map(float, input().split())
    sum = sum + a*b
print('%.4f' % sum)
