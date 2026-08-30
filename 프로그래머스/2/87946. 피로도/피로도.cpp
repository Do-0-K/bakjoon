#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int dfs(int k, vector<vector<int>>& dungeons, vector<bool>& visited, int cnt) {
    int answer = cnt;

    for (int i = 0; i < dungeons.size(); i++) {
        int min_k = dungeons[i][0];
        int use_k = dungeons[i][1];

        if (!visited[i] && k >= min_k) {
            visited[i] = true;

            int result = dfs(k - use_k, dungeons, visited, cnt + 1);

            answer = max(answer, result);

            visited[i] = false;
        }
    }

    return answer;
}

int solution(int k, vector<vector<int>> dungeons) {
    vector<bool> visited(dungeons.size(), false);

    return dfs(k, dungeons, visited, 0);
}