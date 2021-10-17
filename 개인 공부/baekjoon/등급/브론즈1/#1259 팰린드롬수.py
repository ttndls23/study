import sys # 여러줄 입력 받기 위해 사용

num_list = []

while 1:
    num = sys.stdin.readline()

    if int(num) != 0 :
        num_list.append(num)
    else :
        break


for i in range(0, len(num_list)):
    result = "yes"
    for j in range(1, len(num_list[i])//2+1):
        if num_list[i][j-1] != num_list[i][-j-1]:
            result = "no"
        # print("i : " + str(i) + ", j : " + str(j) + ", num_list[i][j-1] : " + num_list[i][j-1] + ", num_list[i][-j] : "+ num_list[i][-j-1]);
    print(result)

