t = int(input())
for i in range(0, t):
    a, b, c = map(int, input().split())
    if b-a > c:
        print("advertise")
    elif b-a == c:
        print("does not matter")
    else:
        print("do not advertise")
