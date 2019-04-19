x = int(input())
l = list(map(int, input().split()))
sum=0
nr=0
for i in l:
    if i == -1:
        continue
    sum = sum + i
    nr = nr + 1
print(sum/nr)