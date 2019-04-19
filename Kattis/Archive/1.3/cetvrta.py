x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())
x3, y3 = map(int, input().split())

if x1 == x2:
    print(x3, end=' ')
if x1 == x3:
    print(x2, end=' ')
if x3 == x2:
    print(x1, end=' ')

if y1 == y2:
    print(y3)
if y1 == y3:
    print(y2)
if y3 == y2:
    print(y1)
