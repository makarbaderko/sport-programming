a, n = map(float, input().split())
ans = a
def power(a, n):
    global ans
    if n == 0:
        ans = 1
        return
    ans *= a
    if ans != a ** n:
        power(a, n)
power(a, n)
print(ans)