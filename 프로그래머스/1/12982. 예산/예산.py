def solution(d, budget):
    answer = 0
    d.sort()
    s = 0
    for i in range(len(d)):
        s += d[i]
        answer += 1
        if budget < s:
            s -= d[i]
            answer -= 1
            break

    return answer