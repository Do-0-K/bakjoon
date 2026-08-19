def solution(people, limit):
    answer = 0
    people.sort()
    
    min_v = 0
    max_v = len(people) - 1
    
    while min_v <= max_v:
        if people[min_v] + people[max_v] > limit:
            answer += 1
            max_v -= 1
        else:
            answer += 1
            max_v -= 1
            min_v += 1
    return answer