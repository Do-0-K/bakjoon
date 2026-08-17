#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (auto query : queries) {
        int s = query[0];
        int e = query[1];
        int k = query[2];

        int minValue = 1000000;

        for (int i = s; i <= e; i++) {
            if (arr[i] > k) {
                minValue = min(minValue, arr[i]);
            }
        }

        if (minValue == 1000000)
            answer.push_back(-1);
        else
            answer.push_back(minValue);
    }
    return answer;
}