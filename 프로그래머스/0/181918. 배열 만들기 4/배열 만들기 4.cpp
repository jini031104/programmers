#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    
    for(int i=0; i<arr.size(); i++){
        if(stk.size() == 0) {
            stk.push_back(arr[i]);
        } else if(stk[stk.size() - 1] < arr[i]){
            stk.push_back(arr[i]);
        } else if(stk[stk.size() - 1] >= arr[i]){
            stk.pop_back();
            i--;
        }
    }
    
    return stk;
}