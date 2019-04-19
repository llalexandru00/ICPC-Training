import math

a, b = map(int, input().split())
print(math.ceil(a / math.sin(b * math.pi / 180)))\
