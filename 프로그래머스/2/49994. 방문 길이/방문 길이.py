def solution(dirs):
    move = {'U':1,'L':0,'D':3,'R':2}
    move_x = [-1,0,1,0]
    move_y = [0,1,0,-1]
    start_x = 0
    start_y = 0
    x = set()
    for i in dirs:
        t = move[i]

        nx = start_x + move_x[t]
        ny = start_y + move_y[t]

        if not (-5 <= nx <= 5 and -5 <= ny <= 5):
            continue

        temp = tuple(sorted([
            (start_x, start_y),
            (nx, ny)
        ]))

        x.add(temp)

        start_x = nx
        start_y = ny
        
    print(x)
    return len(x)