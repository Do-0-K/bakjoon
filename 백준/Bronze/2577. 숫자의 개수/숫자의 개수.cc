#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >>b >>c;
    int pro = a*b*c;
    int num[10]={0};
    while(pro >0){
        num[pro%10]++;
        pro/=10;
    }
    for(int i=0;i<10;++i){
        cout << num[i] << "\n";
    }
    return 0;
}