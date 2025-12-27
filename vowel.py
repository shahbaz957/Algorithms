lst = ['a' , 'e' , 'i' , 'o' , 'u']
s = "ICeCrEam"
vowel = []
for i in s : 
    if i.lower() in lst : 
        vowel.append(i)

l = 0  
r = len(vowel) -1
while (l <= r):
    tmp = vowel[l]
    vowel[l] = vowel[r]
    vowel[r] = tmp
    l += 1
    r -= 1
print(vowel)