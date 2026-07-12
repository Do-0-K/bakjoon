#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++) { //받은 수까지 돌기
        int cnt = 0; // 갯수 체크
        for (int j = 1; j <= i; j++) { //나눠지는 경우를 체크
            if (i % j == 0) {
                cnt++;
            }
        }
        if (cnt >= 3) { //3개 이상이면 합성수
            answer++;
        }
    }
    return answer;
}