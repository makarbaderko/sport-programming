#https://www.e-olymp.com/ru/problems/19
n = int(input())
m = []
ans = 0
for i in str(n):
    m.append(int(i))
l = int(len(str(n)))
h = l / 2
if l%2==0:
    a = m[:int(h)]
    b= m[int(h):] 
    for i in range(len(a)):
        if a[i] == b[i]:
            ans+=1
elif n==0:
    #123322
    ans=0
elif l == 1:
    ans = 0
print(ans)