def solution(dirs):
    move = {'U':1,'L':0,'D':3,'R':2}
    move_x = [-1,0,1,0]
    move_y = [0,1,0,-1]
    s_x = 0
    s_y = 0
    x = set()
    for i in dirs:
        t = move[i]

        nx = s_x + move_x[t]
        ny = s_y + move_y[t]

        if not (-5 <= nx <= 5 and -5 <= ny <= 5):
            continue

        temp = tuple(sorted([(s_x, s_y),(nx, ny)]))

        x.add(temp)

        s_x = nx
        s_y = ny
        
    print(x)
    return len(x)