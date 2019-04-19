s = input()
t = ""
for i in range(0, len(s)//3):
    t = t + "PER"
nr = 0
for i in range(0, len(s)):
    if s[i] != t[i]:
        nr = nr + 1
print(nr)
