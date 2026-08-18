def solution(board):
    n = len(board)
    m = len(board[0])
    
    for i in range(n):
        for j in range(m):
            if board[i][j] == 1:
                for di in range(-1, 2):
                    for dj in range(-1, 2):
                        ni = i + di
                        nj = j + dj

                        if 0 <= ni < n and 0 <= nj < m:
                            if board[ni][nj] == 0:
                                board[ni][nj] = 2

    answer = 0

    for i in range(n):
        for j in range(m):
            if board[i][j] == 0:
                answer += 1
    return answer