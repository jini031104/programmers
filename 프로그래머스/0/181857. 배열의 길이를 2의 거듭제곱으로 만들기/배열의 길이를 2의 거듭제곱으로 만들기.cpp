#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int s = 1;
    
    while(1){
        if(s >= arr.size())
            break;
        s *= 2;
    }
    
    int len = arr.size();
    for(int i=0; i<s; i++){
        if(len <= i){
            answer.push_back(0);
            continue;
        }
        answer.push_back(arr[i]);
    }
    
    return answer;
}