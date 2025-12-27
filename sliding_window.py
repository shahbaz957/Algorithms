# s = "AAABABB"

# l = 0
# r = 0
# flag = True
# summ = 0 
# k = 1
# while(flag):
#     if (s[l] == s[r]):
#         r +=1 
#         summ += 1
#     elif (s[l] != s[r] and k > 0):
#         summ+=1 
#         r+=1 
#         k-=1
#     else:
#         flag = False

# print(summ)
from collections import Counter
s = "ABAB"
map = Counter(s)
print(len(map))
