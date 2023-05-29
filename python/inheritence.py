# fo = open("prajawl.txt", "r+")
# print("name of the file: ", fo.name)
# print("name of the file: ", fo.closed)
# print("name of the file: ", fo.mode)
# # fo.readlines()
# x = fo.readline()
# print("first line", x)
# x = fo.readline()
# print("second line: ",x)
# x = fo.readline()
# print("third line: ",x)
# y = fo.tell()
# print(y)

# # print(fo)
# for i in fo:
#     print(i)
# fo.close()
# Open a file
# fo = open("prajawl.txt", "r+")
# str = fo.read(10)
# print ("Read String is : ", str)
# # Check current position
# position = fo.tell()
# print ("Current file position : ", position)
# # Reposition pointer at the beginning once again
# position = fo.seek(0, 0)
# str = fo.read(10)
# print ("Again read String is : ", str)
# # Close opened file
# fo.close()
# class animal():
#     def __init__(self, x, y):
#         self.name = x
#         self.surname = y
#         print("animal called ")
#     def objname(self):
#         name = self.__class__.__name__
#         print("the name of the object is: ",name)
#     def __str__(self):
#         return "(The name of the person is {0} {1})".format(self.name, self.surname)
# class human(animal):
#     def __init__(self, x, y, z, a):
#         self.leg = int(z)
#         self.age = int(a)
#         print("human called")
#         animal.__init__(self, x, y)
#     def __str__(self):
#         return "human has {0} legs and is {1} years old".format(self.leg, self.age)
#     def objname(self):
#         print()
#         # name = self.__class__.__name__
#         # print("the name of the object is: ",name)
#         # print("name: ", self.name)
#         # print("surname: ", self.surname)
#         # print("legs: ", self.leg)
#         # print("age: ", self.age)
#         animal.objname(self)
#     class cat(animal):
#         def __init (self, x):
#             self.leg = x
#             print("cat constructor called")
#     class policedog()
# prajwal = human("prjawal", "negi", 2, 20)
# lamborhini = human("lamborhini", "ferrari", 2, 19)
# print(prajwal)
# print(lamborhini)
# print(prajwal.objname())
# print(lamborhini.objname())
# print(prajwal.objname())