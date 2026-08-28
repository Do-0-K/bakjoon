def solution(absolutes, signs):
    total = 0
    for i in range(0,len(signs)):
        if not signs[i]:
            total -= absolutes[i]
        else:
            total += absolutes[i]
    return total