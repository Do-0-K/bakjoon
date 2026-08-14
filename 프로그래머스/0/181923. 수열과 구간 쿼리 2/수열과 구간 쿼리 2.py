def solution(arr, queries):
    answer = []
    for i in range(0, len(queries)):
        temp = []
        for j in range(queries[i][0],queries[i][1]+1):
            if arr[j] > queries[i][2]:
                temp.append(arr[j])
        if len(temp) == 0:
            answer.append(-1)
        else:
            temp.sort()
            answer.append(temp[0])
    return answer