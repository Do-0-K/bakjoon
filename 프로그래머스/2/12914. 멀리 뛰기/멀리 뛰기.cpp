#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    vector<int> x(n+1);
    if (n==1) return 1;
    x[1] = 1;
    
    if (n==2) return 2;
    x[2] = 2;
    
    for(int i = 3; i < n+1; ++i){
        x[i] = (x[i-2] + x[i-1]) % 1234567;
    }
    
    return x[n];
}