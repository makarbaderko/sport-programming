n, m, k = map(int, input().split())
first = list(map(int, input().split()))
second = list(map(int, input().split()))
third = []
all_kids = []
for i in range(1, n+1):
    all_kids.append(i)
for i in range(1, len(all_kids)):
    if i in first or i in second:
        pass
    else:
        third.append(i)
print(len(third))
print(third)