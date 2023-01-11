from collections import deque
import sys;

sys.setrecursionlimit(10**6);

num = int(input());

dx = [1, -1, 0, 0];
dy = [0, 0, 1, -1];

def dfs() :

    while (que):
        now_dx, now_dy = que.popleft();
        
        for i in range(4):
            temp_dx = now_dx + dx[i];
            temp_dy = now_dy + dy[i];

            if (0 <= temp_dx < m) and (0 <= temp_dy < n) and (field[temp_dx][temp_dy] == 1) and (visit[temp_dx][temp_dy] == 0):
                visit[temp_dx][temp_dy] = 1;
                que.append((temp_dx, temp_dy));

result = [];
for _ in range(num):
    m, n, k = map(int, input().split());

    visit = [[0] * n for i in range(m)];
    field = [[0] * n for i in range(m)];

    for _ in range(k):
        x, y = map(int, input().split());
        field[x][y] = 1;

    que = deque();
    que.append((0, 0));
    count = 0;

    for i in range(m):
        for ii in range(n):
            if (visit[i][ii] == 0) and (field[i][ii] == 1):
                que.append((i, ii));
                visit[i][ii] = 1;
                dfs();
                count += 1;

    result.append(count);

for i in result:
    print(i);
