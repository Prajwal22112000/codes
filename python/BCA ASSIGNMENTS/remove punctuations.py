string = list(input("enter the string: "))
a = ["(", ")", "@", "!", "'", '"', '.', ',', ';', '/', '[', ']']
for i in range(len(string)):
    if string[i] in a:
        string[i] = ""
print("".join(string))