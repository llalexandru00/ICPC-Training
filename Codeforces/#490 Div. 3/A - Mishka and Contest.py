n, k = list(map(int, raw_input().split()))
l = list(map(int, raw_input().split()))
st=0
pot = 0
dr=n-1
while st<n and l[st]<=k:
    st = st + 1
    pot = pot + 1
while st<dr and l[dr]<=k:
    dr = dr - 1
    pot = pot + 1
print(pot)