#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int product = 1;
    int sum = 0;

    for (int num : num_list) {
        product *= num;
        sum += num;
    }

    int squareOfSum = sum * sum;
    if(product < squareOfSum)answer =1;
    if(product > squareOfSum)answer =0;
    return answer;
}