n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a = sorted(a)
b = sorted(b)

i = len(a)-1
j = len(b)-1
nr = 0
while i >= 0 and j >= 0:
    if a[i] <= b[j]:
        i = i-1
        j = j-1
        nr = nr+1
    else:
        i = i-1
print(nr)
