#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for (string s : babbling) {
        while (!s.empty()) {
            if (s.find("aya") == 0) {
                s.erase(0, 3);
            }
            else if (s.find("ye") == 0) {
                s.erase(0, 2);
            }
            else if (s.find("woo") == 0) {
                s.erase(0, 3);
            }
            else if (s.find("ma") == 0) {
                s.erase(0, 2);
            }
            else {
                break;
            }
        }
        if (s.empty()) {
            answer++;
        }
    }
    return answer;
}