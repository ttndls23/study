num = input()

if (int(num) < 10):
    num = '0' + num

num_first = num[0]
num_second = num[1]

final_num = str(int(num[0]) + int(num[1]))
new_num = num[1] + final_num[-1]

i = 1

while num != new_num :
    final_num = str(int(new_num[0]) + int(new_num[1]))
    new_num = new_num[1] + final_num[-1]
    i = i + 1

print(i)
