t = int(input())
for i in range(0, t):
    a = input()
    b = input()
    print(a)
    print(b)
    for i in range(0, len(a)):
        if a[i] == b[i]:
            print('.', end='')
        else:
            print('*', end='')
    print('')
