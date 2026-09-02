def solution(progresses, speeds):
    answer = []
    done = [False] * len(progresses)
    n = len(progresses)
    k = 0
    cnt = 0
    while not all(done):
        for i in range(n):
            progresses[i] += speeds[i]
            if progresses[i] >= 100:
                done[i] = True
                progresses[i] = 100
        
        if done[k]:
            cnt = 0

            while k < n and done[k]:
                cnt += 1
                k += 1

            answer.append(cnt)
        
    return answer