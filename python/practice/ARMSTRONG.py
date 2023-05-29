def call(x):
    # x = input("enter the number: ")
    # x = int(x)
    n = int(len(x))
    number = 0
    for i in x:
        number = number + int(i)**int(n)
    if number == int(x):
        print("armstrong number")
    else:
        print("not an armstrong number")
