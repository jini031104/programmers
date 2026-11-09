#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    vector<int> answer2;
    
    for(int j=0; j<queries.size(); j++){
        for(int i=queries[j][0]; i<=queries[j][1]; i++){
            answer.push_back(arr[i]);
        }

        int min = 1000001;
        for(int k=0; k<answer.size(); k++){
            if(queries[j][2] < answer[k] && answer[k] < min){
                min = answer[k];
            }
        }
        
        if(min != 1000001)
            answer2.push_back(min);
        else
            answer2.push_back(-1);
                
        answer.clear();
    }
    
    return answer2;
}