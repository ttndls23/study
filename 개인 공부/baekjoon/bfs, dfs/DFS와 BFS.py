from collections import deque

n, m, v = map(int, input().split())

bfs_visit = [0 * i for i in range(n+1)];
dfs_visit = [0 * i for i in range(n+1)]; 

data = [[] * i for i in range(n+1)];

#print(bfs_visit, dfs_visit, data)

for i in range(m):
    a, b = map(int, input().split());
    data[a].append(b)
    data[b].append(a)

for d in data:
    d = d.sort();

# dfs

dfs_result = [];

def dfs(vi):
    if (dfs_visit[vi] == 1):
        return;
    else :
        dfs_visit[vi] = 1;
        dfs_result.append(vi);
        for ii in data[vi]:
            dfs(ii);
            
dfs(v);
print(' '.join(str(i) for i in dfs_result));


# bfs
    
que = deque();
que.append(v);
bfs_result = [];
while(que):
    bfs_data = que.popleft();
    if (bfs_visit[bfs_data] == 1):
        continue;
    else:
        bfs_visit[bfs_data] = 1;
        bfs_result.append(bfs_data);
        for d in data[bfs_data]:
            que.append(d);


print(' '.join(str(i) for i in bfs_result));
