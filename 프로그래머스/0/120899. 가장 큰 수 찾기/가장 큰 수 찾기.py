def solution(array):
    answer = []
    max = 0
    d = 0
    for i in range(0,len(array)):
        if max < array[i]:
            max = array[i]
            d = i
    answer.append(max)
    answer.append(d)
    return answer