import string

nru=0
nrl=0
sp=0
sy=0
s = input()
for i in s:
    if i.isupper():
        nru = nru + 1
    elif i.islower():
        nrl = nrl + 1
    elif i == '_':
        sp = sp + 1
    else:
        sy = sy + 1

print(sp/len(s))
print(nrl/len(s))
print(nru/len(s))
print(sy/len(s))
