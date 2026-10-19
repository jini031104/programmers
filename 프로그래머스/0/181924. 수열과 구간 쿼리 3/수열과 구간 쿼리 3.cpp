#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for(int i=0; i<queries.size(); i++){
        int a = queries[i][0], b = queries[i][1];
        int num = arr[a];
        
        arr[a] = arr[b];
        arr[b] = num;
    }
    
    return arr;
}