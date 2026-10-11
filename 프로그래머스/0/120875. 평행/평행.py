from itertools import combinations

def solution(dots):
    pairs = list(combinations(dots, 2))

    for (x1, y1), (x2, y2) in pairs:
        for (x3, y3), (x4, y4) in pairs:
            if (x1, y1) != (x3, y3) and (x1, y1) != (x4, y4) \
            and (x2, y2) != (x3, y3) and (x2, y2) != (x4, y4):
                if (y2 - y1) * (x4 - x3) == (y4 - y3) * (x2 - x1):
                    return 1

    return 0