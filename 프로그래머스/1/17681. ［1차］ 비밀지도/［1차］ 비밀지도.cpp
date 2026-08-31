#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer, v1, v2, v3;
    
    for(int i=0; i<n; i++){
        string s;
        arr1[i] = arr1[i] | arr2[i];
        for(int j=0; j<n; j++){
            if(arr1[i] % 2 == 0)
                s += ' ';
            else
                s += '#';
            
            arr1[i] = arr1[i] >> 1;
        }
        reverse(s.begin(), s.end());
        answer.push_back(s);
    }
    
    return answer;
}