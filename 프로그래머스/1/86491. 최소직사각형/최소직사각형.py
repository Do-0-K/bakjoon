def solution(sizes):
    answer = 0
    x = []
    y = []
    for i in range(len(sizes)):
        if sizes[i][0] < sizes[i][1]:
            temp = sizes[i][0]
            sizes[i][0] = sizes[i][1]
            sizes[i][1] = temp
        x.append(sizes[i][0])
        y.append(sizes[i][1])
        
    answer = max(x) * max(y)
    
    return answer