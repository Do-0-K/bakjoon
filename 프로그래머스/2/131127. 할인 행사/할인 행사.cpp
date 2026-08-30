#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    unordered_map<string, int> d;

    for (int i = 0; i < want.size(); i++) {
        d[want[i]] = number[i];
    }

    int cnt = 0;

    for (int i = 0; i < discount.size() - 9; i++) {
        unordered_map<string, int> c;

        for (int j = i; j < i + 10; j++) {
            if (d.count(discount[j])) {
                c[discount[j]]++;
            } else {
                c[discount[j]] = 1;
            }
        }

        if (c == d && !c.empty()) {
            cnt++;
        }
    }

    if (cnt == 0) {
        return 0;
    } else {
        return cnt;
    }
}