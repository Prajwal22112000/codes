from ctypes.wintypes import SIZE


x = (1, 3, 4, 45, 15, 13)
print(max(x), min(x), list(reversed(x)), list(sorted(x,reverse=True)))