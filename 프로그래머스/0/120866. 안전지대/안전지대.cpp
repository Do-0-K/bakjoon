#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int n = board.size();
    int m = board[0].size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (board[i][j] == 1) {
                for (int x = i - 1; x <= i + 1; ++x) {
                    for (int y = j - 1; y <= j + 1; ++y) {
                        if (x >= 0 && x < n && y >= 0 && y < m) {
                            if (board[x][y] == 0) {
                                board[x][y] = 2;
                            }
                        }
                    }
                }
            }
        }
    }
    int answer = 0;
    
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(board[i][j] == 0){
                answer++;
            }
        }
    }
    
    return answer;
}