def solution(elements):
    n = len(elements)
    answer = set()

    elements = elements * 2

    for start in range(n):
        total = 0

        for length in range(n):
            total += elements[start + length]
            answer.add(total)
    
    return len(answer)