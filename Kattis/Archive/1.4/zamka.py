l = int(input())
d = int(input())
x = int(input())

def sum(x):
    sum = 0
    while x>0:
        sum = sum + x%10
        x = x // 10
    return sum


minim = 1e9
maxim = -1e9
for i in range(l, d+1):
    if sum(i) == x:
        if minim > i:
            minim = i
        if maxim < i:
            maxim = i

print(minim)
print(maxim)