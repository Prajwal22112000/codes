def divide(a, b):
    try:
        x = a/b
        if b == 0:
            raise Exception(b, "is zero")
    except Exception as lol:
        print("lol")
        print(lol)
    # except Exception as lol:
    #     print(lol)
    # except ZeroDivisionError as zd:
    #     print("error", zd)
    # except TypeError as te:
    #     print("typo", te)
    # else:
    #     print("prjawl is cool boy")
    # finally:
    #     print("function completed")
divide(1,9)
divide(1,0)
# divide(1,"A")