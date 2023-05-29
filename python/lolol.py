class A:
    def fun(self):
        print("A")
class B(A):
    # pass
    def fun(self):
        print("B")
        super().fun()
class C(A):
    def fun(self):
        print("C")
        super().fun()
class D(C, B):
    def fun(self):
        print("D")
        super().fun()
d=D()
d.fun()