ans = []
numbers = [1,2,3,4]
target = 3
r = len(numbers) -1 
l = 0 
while(l < r):
    if (numbers[l] + numbers[r] < target):32
        l += 1
    elif (numbers[l] + numbers[r] > target):
        r -= 1
    elif (numbers[l] + numbers[r] == target):
        ans.append(l)
        ans.append(r)
        break

print(ans)
