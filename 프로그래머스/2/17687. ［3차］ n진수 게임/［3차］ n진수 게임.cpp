#include <string>
using namespace std;

string solution(int n, int t, int m, int p) {
    string answer = "";
    string numbers = "";
    int num = 0;

    string digits = "0123456789ABCDEF";

    while (numbers.length() < t * m) {
        if (num == 0) {
            numbers += "0";
        }
        else {
            string temp = "";
            int x = num;

            while (x > 0) {
                temp = digits[x % n] + temp;
                x /= n;
            }

            numbers += temp;
        }

        num++;
    }

    for (int i = p - 1; i < t * m; i += m) {
        answer += numbers[i];

        if (answer.length() == t) {
            break;
        }
    }

    return answer;
}
