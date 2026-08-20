def solution(cards1, cards2, goal):
    card1_index = 0
    card2_index = 0
    
    for i in range(0 , len(goal)):
        if card1_index < len(cards1) and cards1[card1_index] == goal[i]:
            card1_index += 1
        elif card2_index < len(cards2) and cards2[card2_index] == goal[i]:
            card2_index += 1
        else:
            return "No"
    
    return "Yes"