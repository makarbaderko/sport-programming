ans = 0
def recursion():
    global ans
    n = int(input())
    if n != 0:
        recursion()
    ans +=n
recursion()
print(ans)