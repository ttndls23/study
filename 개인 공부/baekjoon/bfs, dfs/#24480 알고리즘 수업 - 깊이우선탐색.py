n, m, r = map(int, input().split())

visit = [0] * (n + 1)
data = [[0] * (n + 1) for i in range(n + 1)];

for i in range(m):
    x, y = map(int, input().split());
    data[x][y] = 1;
    data[y][x] = 1;

count = 0;

def dfs(vi):
    global count;
    visit[vi] = 1;
    count += 1;
    print(vi)

    for i in range(n, 0, -1):
        if (data[vi][i] == 1) and (visit[i] == 0):
            dfs(i);

dfs(r);

if (n > count):
    for _ in range(n - count):
        print(0);

        
