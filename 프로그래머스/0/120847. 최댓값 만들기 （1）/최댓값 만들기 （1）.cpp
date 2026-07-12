#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end()); //오름차순 정렬
    
    int n = numbers.size();
    return numbers[n - 1] * numbers[n - 2]; //마지막 인자 2개를 곱하기
}