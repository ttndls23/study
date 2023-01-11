from collections import deque
import sys

sys.setrecursionlimit(10**6)

n, m, h = map(int, input().split())

tomato_box = [[] * 1 for _ in range(h)];

dx = [1, -1, 0, 0, 0, 0]
dy = [0, 0, 1, -1, 0, 0]
dz = [0, 0, 0, 0, 1, -1]

que = deque()

def deque():
    while(que):
        now_z, now_x, now_y = que.popleft()

        for i in range(6):
            temp_z = now_z + dz[i]
            temp_x = now_x + dx[i]
            temp_y = now_y + dy[i]

            if (0 <= temp_z < h) and (0 <= temp_x < m) and (0 <= temp_y < n) and tomato_box[temp_z][temp_x][temp_y] == 0:
                tomato_box[temp_z][temp_x][temp_y] = tomato_box[now_z][now_x][now_y] + 1
                que.append((temp_z, temp_x, temp_y))


zero_flag = False
for z in range(h):
    for x in range(m):
        tomato_box[z].append(list(map(int, input().split())))
        if (tomato_box[z][x].count(0) != 0):
            zero_flag = True

if (not zero_flag):
    print(0);
else :

    for z in range(h):
        for x in range(m):
            for y in range(n):
                if (tomato_box[z][x][y] == 1):
                    que.append((z, x, y))

    deque()

    zero_flag = False
    max_data = 0

    for z in range(h):
        for x in range(m):
            if (tomato_box[z][x].count(0) != 0):
                zero_flag = True
                break
            else :
                if (max_data < max(tomato_box[z][x])):
                    max_data = max(tomato_box[z][x])
        if (zero_flag):
            break

    if (zero_flag):
        print(-1)
    else :
        print(max_data-1)
