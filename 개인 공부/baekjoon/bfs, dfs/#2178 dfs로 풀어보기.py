from collections import deque

n, m = map(int, input().split());

map_data = [];

for _ in range(n):
    map_data.append(list(map(int, input())));

visit = [[0] * m for i in range(n)];

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

que = deque();
def bfs(x, y):
    que.append((x, y));

    while (que):
        print(que);
        x_data, y_data = que.popleft();
        
        for i in range(4):
            temp_dx = x_data + dx[i];
            temp_dy = y_data + dy[i];

            if (0 <= temp_dx <= n-1) and (0 <= temp_dy <= m-1) and map_data[temp_dx][temp_dy] == 1:
                que.append((temp_dx, temp_dy));
                map_data[temp_dx][temp_dy] = map_data[x_data][y_data] + 1;

    return map_data[n-1][m-1];


print(bfs(0,0));
    
