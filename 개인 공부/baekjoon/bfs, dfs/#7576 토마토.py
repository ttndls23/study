from collections import deque
import sys

sys.setrecursionlimit(10**6)

def dfs() :

    while (que):
        now_x, now_y = que.popleft();

        for i in range(4):
            temp_x = now_x + dx[i]
            temp_y = now_y + dy[i]

            if (0 <= temp_x < n) and (0 <= temp_y < m) and (tomato[temp_x][temp_y] == 0):
                tomato[temp_x][temp_y] = tomato[now_x][now_y] + 1
                que.append((temp_x, temp_y))

m, n = map(int, input().split())

tomato = [];

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

zero_flag = False
for i in range(n):
    tomato.append(list(map(int, input().split())));
    if (tomato[i].count(0) != 0):
        zero_flag = True
        
if (not zero_flag):
    print(0);
else :

    que = deque()
    for i in range(n):
        for ii in range(m):
            if (tomato[i][ii] == 1):
                que.append((i, ii))

    dfs()

    zero_flag = False
    max_data = 0
    for i in range(n):
        if (tomato[i].count(0) != 0):
            zero_flag = True
            break
        else :
            if (max_data < max(tomato[i])):
                max_data = max(tomato[i])

    if (zero_flag):
        print(-1)
    else :
        print(max_data-1);
    
