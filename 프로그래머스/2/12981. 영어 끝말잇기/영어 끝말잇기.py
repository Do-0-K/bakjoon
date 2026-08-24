def solution(n, words):
    prev = words[0]
    used = {prev}
    for i in range(1, len(words)):
        current = words[i]

        if prev[-1] != current[0] or current in used:
            return [i % n + 1, i // n + 1]

        used.add(current)
        prev = current
        
    return [0,0]