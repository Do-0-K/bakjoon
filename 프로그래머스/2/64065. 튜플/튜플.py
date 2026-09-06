def solution(s):
    s = s[2:-2]
    check = s.split("},{")
    check.sort(key=len)
    check = [list(map(int,i.split(","))) for i in check]
    
    answer = []
    used = set()
    
    for i in check:
        for n in i:
            if n not in used:
                answer.append(n)
                used.add(n)
    
    return answer