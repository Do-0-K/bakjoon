#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int arr[1001]={0};
    int max=0;
    int max_cnt=0;
    
    for(int i=0;i<array.size();++i){
        arr[array[i]]++;
    }
    
    for(int i=0;i<1001;++i){
        if(max_cnt != 0 && max_cnt == arr[i])
        {
            answer = -1;
        }
        else if(arr[i] > max_cnt)
        {
            max = i;
            max_cnt = arr[i];
            answer = max;
        }
    }
    return answer;
}