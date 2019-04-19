n, w, h = map(int, input().split())
maxim = w**2 + h**2
for i in range(0, n):
    x = int(input())
    if x**2 <= maxim:
        print("DA")
    else:
        print("NE")
