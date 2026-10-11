#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int> > land)
{
    int answer = 0;

    for (int i = 1; i < land.size(); i++) {
        for (int j = 0; j < 4; j++) {
            int maxValue = 0;

            for (int p = 0; p < 4; p++) {
                if (p != j) {
                    maxValue = max(maxValue, land[i - 1][p]);
                }
            }

            land[i][j] += maxValue;
        }
    }

    answer = *max_element(land.back().begin(), land.back().end());

    return answer;
}