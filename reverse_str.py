st = "hello"
stack = []
for i in st:
    stack.append(i)
new_st = ""
for j in range(len(st) -1 , -1 , -1):
    print(j)
    new_st += (stack[j])

print(new_st)