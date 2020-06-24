n = int(input())
def ans(n):
    if n==1:
        return 2
    elif n==2:
        return 4
    else:
        return ans(n-1)+ans(n-2)
    
print(ans(n=n))