from asyncio.windows_events import NULL
from tkinter.tix import MAX


lst = input("enter your list: ").split()
num = int(lst[0])
sum = ""
for i in range(1, len(lst)):
    for j in range(1, len(lst)):
        if (int(lst[i]) + int(lst[j]) == num):
            sum = sum + lst[i] + "," + lst[j] + " "
            # lst[j] = lst[i] = 'x'
            type()
print(sum)
print(lst)