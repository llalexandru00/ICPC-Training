n, m = map(int, input().split())
mod = 1000000007
S = []
P = []


def getsum(x):
    if x == 0:
        return 0
    if x == 1:
        return 1
    i = 1
    nr = 0
    while i <= x: # de verificat
        i = i * 2
        nr = nr + 1
    i = i//4
    nr = nr - 1
    tot = S[nr-1]
    lng = x - (i*2-1)
    up = P[nr] + 2 * (lng-1)
    lp = P[nr] - 2
    if P[nr] % 2 == 0:
        x = up//2
        y = lp//2
        tot = tot + 2*(x*(x+1)//2) - 2*(y*(y+1)//2)
    else:
        tot = tot + ((up+1)//2)**2 - ((lp+1)//2)**2
    return tot % mod


lp = 0
li = -1
lng = 1
for i in range(0, 80):
    if i % 2 == 0:
        ui = li + 2 + (lng-1)*2
        if i == 0:
            S.append(1)
            P.append(1)
        else:
            S.append((S[i-1] + ((ui+1)//2)**2 - ((li+1)//2)**2) % mod)
            P.append(li+2)
        li = ui
    else:
        up = lp + 2 + (lng-1)*2
        if i == 1:
            S.append(7)
            P.append(2)
        else:
            x = up//2
            y = lp//2
            S.append((S[i-1] + 2*(x*(x+1)//2) - 2*(y*(y+1)//2)) % mod)
            P.append(lp+2)
        lp = up
    lng = lng * 2


ans = (getsum(m) - getsum(n-1)) % mod
if ans < 0:
    ans = ans + mod
print(ans)