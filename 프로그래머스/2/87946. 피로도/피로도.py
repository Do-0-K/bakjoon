def dfs(k, dungeons, visited, cnt):
    answer = cnt
    
    for i in range(len(dungeons)):
        min_k, use_k = dungeons[i]
        
        if not visited[i] and k >= min_k:
            visited[i] = True
            
            result = dfs(k-use_k, dungeons, visited, cnt + 1)
            
            answer = max(answer, result)
            visited[i] = False
            
    return answer
    
def solution(k, dungeons):
    visited = [False] * len(dungeons)
    
    return dfs(k, dungeons, visited, 0)