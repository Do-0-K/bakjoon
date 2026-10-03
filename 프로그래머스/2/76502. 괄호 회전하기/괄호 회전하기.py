def solution(s):
    answer = 0
    n = len(s)

    for i in range(n):
        temp = s[i:] + s[:i]
        stack = []

        for ch in temp:
            if ch in "([{":
                stack.append(ch)
            else:
                if not stack:
                    break

                if (stack[-1], ch) in [("(", ")"), ("[", "]"), ("{", "}")]:
                    stack.pop()
                else:
                    break
        else:
            if not stack:
                answer += 1

    return answer
