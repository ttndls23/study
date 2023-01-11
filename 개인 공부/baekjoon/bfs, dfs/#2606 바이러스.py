from collections import deque

com_num = int(input())
bridge_num = int(input())

visit = [0] * (com_num + 1);
data = [[0] * (com_num + 1) for i in range(com_num + 1)];

for _ in range(bridge_num):
    x, y = map(int, input().split())
    data[x][y] = 1;
    data[y][x] = 1;

que = deque()
que.append(1)
count = -1;

while(que):
    index = que.popleft();

    if (visit[index] == 1):
        continue;
    else :
        visit[index] = 1;
        count += 1;

        for key, value in enumerate(data[index]):
            if (value == 1) and (key not in que) and visit[key] == 0:
                que.append(key);

print(count)
        
        
