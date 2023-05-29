n = int(input())
alpha = [int(0) for x in range (0, 26)]
print(alpha)
stringx = ""
for j in range (0,n):
    stringx = input()
    for i in stringx:
        alpha[97 - int(ord(i))] += 1
        # print(int(ord(97 - i)))
        # print(ord(i))
        print(int(ord(i)))
    for i in range(0, 26):
        print(chr(97 + i)*int(alpha[i]), end = "")
        # print(chr(i + 97))
    stringx = ""
    print(alpha)
    print()
    alpha = [int(0) for x in range (0, 26)]
