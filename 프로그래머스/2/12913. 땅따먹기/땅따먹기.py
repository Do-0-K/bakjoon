def solution(land):
    answer = 0

    for i in range(1, len(land)):
        for j in range(4):
            land[i][j] = land[i][j] + max([land[i - 1][p] for p in range(4) if p != j])

    answer = max(land[-1])

    return answer