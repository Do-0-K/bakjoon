#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> stack;

    for (string i : cities) {
        transform(i.begin(), i.end(), i.begin(), ::tolower);

        auto it = find(stack.begin(), stack.end(), i);

        if (it != stack.end()) {
            answer += 1;
            stack.erase(it);
            stack.insert(stack.begin(), i);
        }
        else {
            answer += 5;

            if (cacheSize > 0) {
                stack.insert(stack.begin(), i);

                if (stack.size() > cacheSize) {
                    stack.pop_back();
                }
            }
        }
    }

    return answer;
}