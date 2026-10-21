#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> twoFind;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == 2)
            twoFind.push_back(i);
    }
    
    if(twoFind.size() != 0){
        for(int i=twoFind[0]; i<=twoFind[twoFind.size() - 1]; i++){
            answer.push_back(arr[i]);
        }
    } else {
        answer.push_back(-1);
    }
    
    return answer;
}