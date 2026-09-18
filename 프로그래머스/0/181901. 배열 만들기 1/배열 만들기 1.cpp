#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    
    for(int i=k; i<=n; i+=k){
        answer.push_back(i);
    }
    
    if(answer[answer.size() - 1] > n)
        answer.pop_back();
    
    return answer;
}