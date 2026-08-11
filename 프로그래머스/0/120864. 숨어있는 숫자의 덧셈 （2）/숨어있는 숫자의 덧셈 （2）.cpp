#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int num = 0;
    for (char c : my_string) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
        } else {
            answer += num;
            num = 0;
        }
    }
    answer += num;
    return answer;
}