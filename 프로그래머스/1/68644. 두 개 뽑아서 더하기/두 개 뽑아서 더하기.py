from itertools import combinations
def solution(numbers):
    answer = set()
    for i in combinations(numbers,2):
        answer.add(i[0] + i[1])

    return sorted(answer)