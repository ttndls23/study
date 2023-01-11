from collections import deque

n = int(input())

visit = [[0] * n for i in range(n)];

map_data = [];
count_list = [0];

for _ in range(n):
    map_data.append(input());

def dfs(x, y, z):
    if (visit[x][y] != 0) :
        return;
    else :
        visit[x][y] = z;
        count_list[z] += 1;
        if (x > 0) and (map_data[x-1][y] == '1'): 
            dfs(x-1, y, z);
        if (x < n-1) and (map_data[x+1][y] == '1'):
            dfs(x+1, y, z);
        if (y > 0) and (map_data[x][y-1] == '1'):
            dfs(x, y-1, z);
        if (y < n-1) and (map_data[x][y+1] == '1'):
            dfs(x, y+1, z);

count = 1;
for i in range(n):
    for ii in range(n):
        if (visit[i][ii] != 0) or (map_data[i][ii] != '1'):
            continue;
        else :
            count_list.append(0);
            dfs(i, ii, count);
            count += 1;
            

count_list.sort();

print(count-1);
for i in count_list[1:]:
    print(i);
