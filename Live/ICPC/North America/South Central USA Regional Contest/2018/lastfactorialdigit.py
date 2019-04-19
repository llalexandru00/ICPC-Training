t = int(input())
for i in range(0, t):
    a = int(input())
    s = 1
    for j in range(1, a+1):
        s = s*j
    print(s % 10)
