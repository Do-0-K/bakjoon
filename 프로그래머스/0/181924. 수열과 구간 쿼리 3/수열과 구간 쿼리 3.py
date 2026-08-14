def solution(arr, queries):
    answer = []
    for i in range(0,len(queries)):
        temp = arr[queries[i][0]]
        arr[queries[i][0]] = arr[queries[i][1]]
        arr[queries[i][1]] = temp
    
    answer = arr
    return answer