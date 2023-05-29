f = open("prajwal.txt", "r")
count = 0
for i in f:
    count+=1
    for j in i:
        if j == " ":
            count+=1
print(count)

# contents of file "prajwal.txt"
# prajwal negi is a good programmer
# prajwal negi is in BCA, GLA University

