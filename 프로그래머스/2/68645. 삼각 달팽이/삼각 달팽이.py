def solution(n):
    answer = [[0] * i for i in range(1,n+1)]
    num = 1
    x, y = -1, 0
    for dire in range(n):
        for _ in range(n-dire):
            if dire % 3 == 0:
                x += 1
            elif dire % 3 == 1:
                y += 1
            else:
                x -= 1
                y -= 1
            answer[x][y] = num
            num += 1
    
    return sum(answer,[])