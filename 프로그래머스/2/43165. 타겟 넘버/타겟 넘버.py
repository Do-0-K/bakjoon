answer = 0
def k (numbers, target, total, index):
    global answer
    if index == len(numbers):
        if total == target:
            answer += 1
            return
        return
    
    k(numbers,target,total + numbers[index], index+1)
    k(numbers,target,total - numbers[index], index+1)
    

def solution(numbers, target):
    global answer
    k(numbers,target,0,0)
    
    return answer