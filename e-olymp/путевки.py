n = int(input())
day_numbers = []
day_costs = []
ans = 0
#Принмаем значения и записываем их в списки
for i in range(0, n):
    a,b = input().split()
    a, b = int(a), int(b)
    day_numbers.append(a)
    day_costs.append(b)
#Создаем из списков словарь
alle = {}
for i in range(0, n):
    alle[day_numbers[i]] = day_costs[i]
#Сортируем его по значениям
sorted_by_value = sorted(alle.items(), key=lambda kv: kv[1], reverse=True)
#Создаем массив потерянных дней на каждую путевку
lost = []
for i in range(0, n):
    lost.append(i)
#Создаем массив, в который мы запишем деньги полученные с каждой путевки
earned = []
i = 0
for key, value in sorted_by_value:
    #Нахожу доход на каждой путевке
    earned.append((key-lost[i]) * value)
    i+=1
#Находим итоговый доход
total_earned = sum(earned)
print(sorted_by_value)
print(sum(earned))