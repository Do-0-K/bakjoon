#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    if(100000 <= price && price < 300000){
        return price *0.95;
    }
    else if(300000 <= price && price < 500000){
        return price *0.9;
    }
    else if(500000 <= price){
        return price *0.8;
    }
    return price;
}