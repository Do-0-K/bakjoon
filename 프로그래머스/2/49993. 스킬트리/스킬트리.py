def solution(skill, skill_trees):
    answer = 0
    for i in skill_trees:
        k = ""
        for s in i:
            if s in skill:
                k+=s
        if skill.startswith(k):
            answer += 1
            
    return answer