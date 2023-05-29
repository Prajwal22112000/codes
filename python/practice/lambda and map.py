# map function taking mulitple lists for the argument for the functoin with multiple parameters/
from functools import reduce
def fun(x, y):
    return x*y
a = (5, 5, 5, 5)
x = list(map(fun, a,a))
y = (reduce((lambda x, y:x*y), a))
z = list(filter((lambda x: (x*x)%5 == 0), a))
print(x)
print(y)
print(z)
