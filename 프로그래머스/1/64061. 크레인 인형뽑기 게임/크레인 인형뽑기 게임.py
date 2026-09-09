def solution(board, moves):
    stack = []
    answer = 0

    for move in moves:
        for i in range(len(board)):
            if board[i][move - 1] != 0:
                doll = board[i][move - 1]
                board[i][move - 1] = 0

                if stack and stack[-1] == doll:
                    stack.pop()
                    answer += 2
                else:
                    stack.append(doll)
                break

    return answer