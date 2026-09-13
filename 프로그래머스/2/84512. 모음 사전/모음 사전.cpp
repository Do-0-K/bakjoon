#include <string>
#include <vector>
#include <functional>

using namespace std;

int solution(string word) {
    string w = "AEIOU";
    int answer = 0;
    int count = 0;

    function<void(string)> dfs = [&](string current) {
        if (current == word) {
            answer = count;
            return;
        }

        if (current.length() == 5) {
            return;
        }

        for (char c : w) {
            count++;
            dfs(current + c);
        }
    };

    dfs("");
    
    return answer;
}