#include <iostream>
using namespace std;
int main(){
    int max=-1;
    int maxindex;
    int num;
    for(int i=0;i<9;++i){
        cin >> num;
        if(num > max){
            max = num;
            maxindex = i;
        }
    }
    cout << max << "\n";
    cout << maxindex+1;
    return 0;
}