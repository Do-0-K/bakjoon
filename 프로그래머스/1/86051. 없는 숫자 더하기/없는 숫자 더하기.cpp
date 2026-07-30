#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int s=0;
    
    sort(numbers.begin(),numbers.end());
    
    for(int i=0;i<10;++i){
        s=0;
        for(int j=0;j<numbers.size();++j){
            if(i == numbers[j]){
                s=1;
            }
        }
        if(s==0){
            answer += i;
        }
    }
    return answer;
}