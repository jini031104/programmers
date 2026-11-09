#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    vector<int> answer2;
    vector<int> answer3;
    
    for(int j=0; j<queries.size(); j++){
        for(int i=queries[j][0]; i<=queries[j][1]; i++){
            answer.push_back(arr[i]);
        }

        for(int k=0; k<answer.size(); k++){
            if(queries[j][2] < answer[k]){
                answer2.push_back(answer[k]);
            }
        }
        
        if(answer2.size() != 0)
            answer3.push_back(*min_element(answer2.begin(), answer2.end()));
        else
            answer3.push_back(-1);
                
        answer.clear();
        answer2.clear();
    }
    
    return answer3;
}