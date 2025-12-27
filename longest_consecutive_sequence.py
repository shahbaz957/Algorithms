<<<<<<< HEAD
arr =[0,3,2,5,4,6,1,1]
myset = set(arr)
starter = 2
print(myset)
maxlen = 0
for i in arr:
    length = 1
    flag = True
    if ((i-1) not in myset):
        starter = i
        while (flag):
            if ((i+1) in myset):
                length += 1
                i += 1
            else:
                flag = False
        if (length > maxlen):
            maxlen = length

=======
arr =[0,3,2,5,4,6,1,1]
myset = set(arr)
starter = 2
print(myset)
maxlen = 0
for i in arr:
    length = 1
    flag = True
    if ((i-1) not in myset):
        starter = i
        while (flag):
            if ((i+1) in myset):
                length += 1
                i += 1
            else:
                flag = False
        if (length > maxlen):
            maxlen = length

>>>>>>> 79c72ca93056f3f8d669e73651145c6a1d4614a5
print(maxlen)