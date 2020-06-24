n = int(input())
def rec(n):
    if len(str(n)) > 1:
        n = sum([int(x) for x in str(n)])
        rec(n)
rec(n)
print(n)