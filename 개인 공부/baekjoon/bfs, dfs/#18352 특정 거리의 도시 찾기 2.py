from collections import deque

city, doro, k, start_city = map(int, input().split())

info = [[]];
visit = [[0] * 2 for i in range(city+1)];
result = []

for _ in range(city):
    info.append([]);

for _ in range(doro):
    key, value = map(int, input().split());
    info[key].append(value)
    

next_visit = deque();

def test(kk):
    global next_visit;
    for val in info[kk]:
        if (val not in next_visit):
            visit[val][1] = visit[kk][1] + 1;
            if (visit[val][1] == k):
                result.append(val);
    next_visit = next_visit + deque(info[kk]);

visit[start_city][0] = 1;
test(start_city);

while (next_visit):
    key = next_visit.popleft();
    if (visit[key][0] != 1):
        visit[key][0] = 1;
        test(key);
    else :
        continue;

if (len(result) == 0):
    print(-1)
else :
    for i in result:
        print(i);
