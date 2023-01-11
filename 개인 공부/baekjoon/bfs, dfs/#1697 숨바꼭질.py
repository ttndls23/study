from collections import deque
import sys

sys.setrecursionlimit(10**6)

n, k = map(int, input().split())

max_map = 10**5;

visit = [0] * max_map

visit[n] = 0
que = deque()
que.append(n)

while(que):
    now = que.popleft()

    if (now == k):
        print(visit[now])
        break

    for i in (now - 1, now + 1, now * 2):
        if (0 <= i <= max_map) and (visit[i] == 0):
            visit[i] = visit[now] + 1
            que.append(i)
