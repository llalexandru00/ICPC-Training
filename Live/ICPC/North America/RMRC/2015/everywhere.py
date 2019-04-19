t = int(input())

for i in range(0, t):
    n = int(input())
    s = set()
    for j in range(0, n):
        city = input()
        s.add(city)
    print(len(s))
