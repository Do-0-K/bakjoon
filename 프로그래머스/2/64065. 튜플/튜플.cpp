#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> solution(string s) {
    vector<vector<int>> check;

    vector<int> temp;
    string num;

    for (char c : s) {
        if (isdigit(c)) {
            num += c;
        }
        else {
            if (!num.empty()) {
                temp.push_back(stoi(num));
                num.clear();
            }

            if (c == '}') {
                if (!temp.empty()) {
                    check.push_back(temp);
                    temp.clear();
                }
            }
        }
    }

    sort(check.begin(), check.end(),
         [](vector<int>& a, vector<int>& b) {
             return a.size() < b.size();
         });

    vector<int> answer;
    set<int> used;

    for (auto& i : check) {
        for (int n : i) {
            if (used.find(n) == used.end()) {
                answer.push_back(n);
                used.insert(n);
            }
        }
    }

    return answer;
}
