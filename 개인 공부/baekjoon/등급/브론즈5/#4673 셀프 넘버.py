self_number = [0 for i in range(0, 10001)]

for i in range(1, 10001):
    i_len = len(str(i))
    temp_num = i
    for j in str(i):
        temp_num = temp_num + int(j);
        if(temp_num > 10000):
            break;

    if (temp_num > 10000) :
        continue;

    self_number[temp_num] = self_number[temp_num] + 1;

result = []
for i in range(1, 10001):
    if (self_number[i] == 0) :
        print(i)

