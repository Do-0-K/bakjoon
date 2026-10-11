#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());

    int s = 0;

    for (int i = 0; i < d.size(); i++) {
        s += d[i];
        answer++;

        if (budget < s) {
            s -= d[i];
            answer--;
            break;
        }
    }
    return answer;
}