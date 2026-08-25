#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> answer1;
    int count = 0;
    
    for(int i=0; i<num_list.size() / n; i++){
        for(int j=0; j<n; j++){
            answer1.push_back(num_list[count]);
            count++;
        }
        
        answer.push_back(answer1);
        answer1.clear();
    }
    
    return answer;
}