n = int(input())
 
def check(number):
    num_list = [int(x) for x in str(number)]
    summ = sum(num_list)
    result = 1
    for x in num_list: 
         result = result * x  
    return 1 if summ == result else 0
if n!= 1:
    all_nums = list(range(10**(n-1), 10**n))
else:
    all_nums = list(range(0, 10**n))
ans = 0
ans_list = []
for i in all_nums:
   if check(i) == 1:
       ans+=1
       ans_list.append(i)
print(ans, min(ans_list))