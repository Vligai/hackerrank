num = int(input())
for i in range(num):
    S1 = ''
    S2 = ''
    j = 0
    str = list(input())
    length = len(str)
    while j in range(length):
        if j%2 == 0:
            S1 += str[j]
        else:
            S2 += str[j]
        j = j + 1
    print(S1,S2)