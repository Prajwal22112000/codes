n = 0
count = 0
vowels = ("a", "e", "i", "o", "u", "A", "E", "I", "O", "U")
def recursion(a, size, count):
    size = size - 1
    if (size == -1):
        print(count)
        return
    if a[size] in vowels:
        count = count + 1
    recursion(a, size, count)
a = "why are you looking at a snap so FUCK"
size = len(a)

recursion(a, size, count)
