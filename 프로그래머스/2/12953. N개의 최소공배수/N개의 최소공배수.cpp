#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
     int answer = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        int n = arr[i];

        int a = answer;
        int b = n;

        while (b != 0) {
            int temp = a % b;
            a = b;
            b = temp;
        }

        answer = answer * n / a;
    }
    return answer;
}