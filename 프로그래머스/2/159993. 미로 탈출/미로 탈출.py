def solution(maps):
    n = len(maps)
    m = len(maps[0])

    dy = [-1, 0, 1, 0]
    dx = [0, 1, 0, -1]

    for y in range(n):
        for x in range(m):
            if maps[y][x] == 'S':
                start = (y, x)
            elif maps[y][x] == 'L':
                lever = (y, x)
            elif maps[y][x] == 'E':
                end = (y, x)

    def bfs(start, target):
        dist = [[0] * m for _ in range(n)]

        y, x = start
        dist[y][x] = 1

        queue = [(y, x)]
        idx = 0

        while idx < len(queue):
            y, x = queue[idx]
            idx += 1

            if (y, x) == target:
                return dist[y][x] - 1

            for i in range(4):
                ny = y + dy[i]
                nx = x + dx[i]

                if ny < 0 or nx < 0 or ny >= n or nx >= m:
                    continue

                if maps[ny][nx] == 'X' or dist[ny][nx] != 0:
                    continue

                dist[ny][nx] = dist[y][x] + 1
                queue.append((ny, nx))

        return -1

    # S에서 L까지
    first = bfs(start, lever)

    if first == -1:
        return -1
    
    # L에서 E까지
    second = bfs(lever, end)

    if second == -1:
        return -1

    return first + second 