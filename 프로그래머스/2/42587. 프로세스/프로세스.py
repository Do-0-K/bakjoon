from collections import deque

def solution(priorities, location):
    queue = deque((priority, index) for index, priority in enumerate(priorities))
    answer = 0

    while queue:
        priority, index = queue.popleft()

        if any(priority < p for p, _ in queue):
            queue.append((priority, index))
        else:
            answer += 1

            if index == location:
                return answer