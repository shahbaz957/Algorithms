l = [0,1,0,2,1,0,1,3,2,1,2,1]
first_left = l[0]
left = []
left.append(first_left)
for i in range(1,len(l)):
    el = max(l[0:i+1])
    left.append(el)
# print(max(l[0:0]))

right = []
for i in range(len(l)):
    el = max(l[i:len(l)])
    right.append(el)

print(right)