print("enter the three sides of triangle\n")
a = int(input("enter first side "))
b = int(input("enter second side "))
c = int(input("enter third side "))

p = (a + b + c)/2
area = (p*(p - a)*(p - b)*(p - c))**0.5

print(area)