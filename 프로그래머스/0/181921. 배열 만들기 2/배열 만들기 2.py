def solution(l, r):
    answer = []
    for i in range(l,r+1):
        s = str(i)
        check = True

        for c in s:
            if c != '0' and c != '5':
                check = False
                break

        if check:
            answer.append(i)

    if not answer:
        answer.append(-1)
    return answer