from collections import deque
import sys

sys.setrecursionlimit(10**6)

length = int(input())
local = []
max_h = 0


for i in range(length):
    append_list = list(map(int, input().split()))
    local.append(append_list)
    if (max_h < max(append_list)):
        max_h = max(append_list)

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

que = deque()
def test(input_x, input_y):
    que.append((input_x, input_y))

    while que:
        x, y = que.popleft()
        for i in range(4):
            temp_x = x + dx[i]
            temp_y = y + dy[i]

            if (0 <= temp_x <= length - 1) and (0 <= temp_y <= length - 1) and visit[temp_x][temp_y] == 0:
                visit[temp_x][temp_y] = 1
                que.append((temp_x, temp_y));

    

count_list = []
for i in range(1, max_h):
    visit = [[0] * length for i in range(length)] 
    count = 0
    for j in range(length):
        for k in range(length):
            if (local[j][k] <= i):
                visit[j][k] = 1

    for j in range(length):
        for k in range(length):
            if (visit[j][k] == 0):
                count += 1
                test(j, k)
    count_list.append(count)
                


    print(visit)

print(max(count_list))
