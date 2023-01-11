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


def test(key):
    if (visit[key][0] == 1):
        return;

    else :
        visit[key][0] = 1;
        if (visit[key][1] == k) :
            result.append(key);
        for i in info[key] : # count 정보 함께 주기
            if (i not in next_visit):
                visit[i][1] = visit[key][1] + 1
            next_visit.append(i);
        while (len(next_visit) > 0):
            test(next_visit.popleft());
    
        

test(start_city);

if (len(result) == 0):
    print(-1)
else :
    for i in result:
        print(i);
