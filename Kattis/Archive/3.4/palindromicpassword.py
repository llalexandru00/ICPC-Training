t = int(input())
l = []
for i in range(100, 1000):
    l.append(i*1000 + int(str(i)[::-1]))

for i in range(0, t):
    n = int(input())
    st = 0
    dr = len(l)-1
    while st <= dr:
        m = (st+dr) // 2
        if l[m] > n:
            dr = m-1
        else:
            st = m+1
    a = -1e9
    b = -1e9
    if st < len(l):
        a = l[st]
    if dr >= 0:
        b = l[dr]
    if abs(n-a) < abs(n-b):
        print(a)
    else:
        print(b)
