#include <vector>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    int n = progresses.size();
    vector<bool> done(n, false);
    
    int k = 0;

    while (k < n) {
        for (int i = 0; i < n; i++) {
            progresses[i] += speeds[i];

            if (progresses[i] >= 100) {
                done[i] = true;
                progresses[i] = 100;
            }
        }

        if (done[k]) {
            int cnt = 0;

            while (k < n && done[k]) {
                cnt++;
                k++;
            }

            answer.push_back(cnt);
        }
    }

    return answer;
}