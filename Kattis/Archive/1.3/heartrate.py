t = int(input())
for i in range(0, t):
    a, b = map(float, input().split())
    print(str(60*(a-1)/b) + " " + str(60*a/b) + " " + str(60*(a+1)/b))
