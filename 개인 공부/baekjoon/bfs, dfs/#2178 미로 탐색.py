import sys
sys.setrecursionlimit(10**6)

n, m = map(int, input().split());

map_data = [];
visit = [[0] * m for _ in range(n)]

for _ in range(n):
    map_data.append(input());


count = 1
def dfs(x, y, visit_num):
    if (x == n) and (y == m):
        visit[x][y] = visit_num;
        return;
    elif (visit[x][y] == 0) or (visit[x][y] > visit_num):
        visit[x][y] = visit_num;
    else :
        return;

    visit_num += 1;
    if (x > 0) and (map_data[x-1][y] == '1'):
        dfs(x-1, y, visit_num);

    if (x < n-1) and (map_data[x+1][y] == '1'):
        dfs(x+1, y, visit_num);

    if (y > 0) and (map_data[x][y-1] == '1'):
        dfs(x, y-1, visit_num);

    if (y < m-1) and (map_data[x][y+1] == '1'):
        dfs(x, y+1, visit_num);
        
dfs(0, 0, count);

print(visit[n-1][m-1]);
