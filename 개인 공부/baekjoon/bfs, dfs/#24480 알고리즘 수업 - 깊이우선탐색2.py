n, m, r = map(int, input().split())

visit = [0] * (n + 1)
data = [[] * i for i in range(n+1)];

for i in range(m):
    x, y = map(int, input().split());
    data[x].append(y);
    data[y].append(x);

for d in data:
    d.sort();
    d.reverse();

count = 0;
print(data)
def dfs(vi):
    global count;
    visit[vi] = 1;
    count += 1;
    print(vi)

    for dd in data[vi]:
        if (visit[dd] == 0):
            dfs(dd);

dfs(r);

if (n > count):
    for _ in range(n - count):
        print(0);


        
