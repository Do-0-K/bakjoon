#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size(),-1);
    stack<int> st;
    
    for (int i=0;i<numbers.size();++i){
        while (!st.empty() && numbers[st.top()] < numbers[i]){
            int d = st.top();
            st.pop();
            
            answer[d] = numbers[i];
        }
        st.push(i);
    }
    return answer;
}