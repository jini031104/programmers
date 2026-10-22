#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(int i=0; i<queries.size(); i++){
        vector<int> index;
        for(int j=queries[i][0]; j<=queries[i][1]; j++){
            if(j % queries[i][2] == 0){
                index.push_back(j);
            }
        }
        for(int j=0; j<index.size(); j++){
            arr[index[j]] += 1;
        }
    }
    
    return arr;
}