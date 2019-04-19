
t = int(input())
while t > 0:
    s = input()
    ok = False
    c = s[0]
    for i in s:
        if i != c:
            ok = True
            break
    if ok:
        s = sorted(s)
        print(''.join(s))
    else:
        print(-1)
    t = t-1
