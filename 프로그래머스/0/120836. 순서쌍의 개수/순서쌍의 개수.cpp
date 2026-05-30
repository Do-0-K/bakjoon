#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int i=1;
    int cnt=0;
    while(i<=n){
        if(n%i==0){
            cnt++;
        }
        i++;
    }
    return cnt;
}