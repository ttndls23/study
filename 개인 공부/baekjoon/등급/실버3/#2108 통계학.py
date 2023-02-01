num = int(input())

data = []
total_sum = 0
data2 = {}

for i in range(num):
    a = int(input())
    data.append(a)
    if (a in data2.keys()) :
        data2[a] = data2[a] + 1
    else :
        data2[a] = 1
    total_sum += a

data = sorted(data)

print(round(total_sum / num))
print(data[num//2])

max_count = max(data2.values())
max_count_num_list = [];
for i in data2.keys():
    if (data2[i] == max_count):
        max_count_num_list.append(i)

max_count_num_list = sorted(max_count_num_list)
if (len(max_count_num_list) > 1):
    print(max_count_num_list[1])
else :
    print(max_count_num_list[0])

print(max(data) - min(data))
