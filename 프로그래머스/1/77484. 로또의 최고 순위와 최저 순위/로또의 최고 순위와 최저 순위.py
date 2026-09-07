def solution(lottos, win_nums):
    answer = []
    cnt = 0
    ic = 0
    for i in lottos:
        if i in win_nums:
            cnt += 1
        if i == 0:
            ic += 1
            
    rank = [6, 6, 5, 4, 3, 2, 1]

    answer.append(rank[cnt + ic])
    answer.append(rank[cnt])
    return answer