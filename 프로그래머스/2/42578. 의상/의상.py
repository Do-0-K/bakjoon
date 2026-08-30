def solution(clothes):
    answer = 1
    clothes_dict = {}
    for name, category in clothes:
        clothes_dict[category] = clothes_dict.get(category,0)+1
        
    for cnt in clothes_dict.values():
        answer *= (cnt+1)
    return answer-1