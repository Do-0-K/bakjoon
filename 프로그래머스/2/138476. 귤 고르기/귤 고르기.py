def solution(k, tangerine):
    answer = 0
    
    count = {}

    for value in tangerine:
        if value in count:
            count[value] += 1
        else:
            count[value] = 1
    
    counts = sorted(count.values(),reverse=True)
    
    for c in counts:
        k -= c
        answer += 1
    
        if k <= 0:
            break
    
    return answer