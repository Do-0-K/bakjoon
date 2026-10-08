def solution(park, routes):
    answer = []
    h, w = len(park), len(park[0])

    for r in range(h):
        for c in range(w):
            if park[r][c] == 'S':
                x, y = r, c

    direct = {'N': (-1, 0),'S': (1, 0),'W': (0, -1),'E': (0, 1)}
    
    for rt in routes:
        dire, dis = rt.split()     
        dis = int(dis)
        
        dx, dy = direct[dire]
        able = True
        nx , ny = x, y
        
        for _ in range(dis):
            nx += dx
            ny += dy
            
            if not(0 <= nx < h and 0 <= ny < w):
                able = False
                break
                    
            if park[nx][ny] == 'X':
                able = False
                break
                        
        if able:
            x, y = nx, ny
        
    return [x,y]