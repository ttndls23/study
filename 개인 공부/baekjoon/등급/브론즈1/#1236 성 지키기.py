column, row = input().split(" ")

column = int(column)
row = int(row)

num = [[] for _ in range(column)]

for i in range(len(num)):
    for a in input():
        num[i].append(a)


count_row = len(num[0])
count_column = len(num)
for i in range(len(num)):
    column_have_x = 0
    for j in range(len(num[0])):
        if num[i][j] != '.' :
            column_have_x = column_have_x + 1

    if column_have_x != 0:
        count_column = count_column - 1

for i in range(len(num[0])):
    row_have_x = 0
    for j in range(len(num)):
        if num[j][i] != '.' :
            row_have_x = row_have_x + 1

    if row_have_x != 0:
        count_row = count_row - 1


print(max(count_row, count_column))
        
