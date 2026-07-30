#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    answer += n * 12000;
    answer += (k - n/10)*2000;
    return answer;
}