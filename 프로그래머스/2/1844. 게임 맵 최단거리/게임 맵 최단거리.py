def solution(maps):
    n = len(maps)
    m = len(maps[0])
    
    dist = [[0] * m for _ in range(n)]
    
    queue = [(0, 0)]
    dist[0][0] = 1

    dy = [-1, 0, 1, 0]
    dx = [0, 1, 0, -1]
    idx = 0

    while idx < len(queue):
        y, x = queue[idx]
        idx += 1
        
        for i in range(4):
            ny = y + dy[i]
            nx = x + dx[i]
            
            if ny < 0 or nx < 0 or ny >= n or nx >= m:
                continue

            if maps[ny][nx] == 0 or dist[ny][nx] != 0:
                continue

            dist[ny][nx] = dist[y][x] + 1
            queue.append((ny, nx))

    return dist[n - 1][m - 1] or -1