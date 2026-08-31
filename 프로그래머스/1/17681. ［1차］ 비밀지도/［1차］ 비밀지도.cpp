#include <string>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer, v1, v2, v3;
    
    for(int i=0; i<n; i++){
        string s;
        while(arr1[i] != 0){
            if (arr1[i] % 2 == 1) // 나머지가 1
                s += '1';
            else			// 나머지가 0
                s += '0';
            
            arr1[i] /= 2;
        }
        
        while(s.size() != n)
            s += '0';
        
        reverse(s.begin(), s.end());
        v1.push_back(s);
    }
    for(int i=0; i<n; i++){
        string s;
        while(arr2[i] != 0){
            if (arr2[i] % 2 == 1) // 나머지가 1
                s += '1';
            else			// 나머지가 0
                s += '0';
            
            arr2[i] /= 2;
        }
        
        while(s.size() != n)
            s += '0';
        
        reverse(s.begin(), s.end());
        v2.push_back(s);
    }
    
    for(int i=0; i<n; i++){
        string s;
        for(int j=0; j<n; j++){
            if(v1[i][j] == '1' || v2[i][j] == '1')
                s += '1';
            else
                s += '0';
        }
        
        v3.push_back(s);
    }
    
    for(int i=0; i<n; i++){
        string s;
        for(int j=0; j<n; j++){
            if(v3[i][j] == '1')
                s += '#';
            else
                s += ' ';
        }
        answer.push_back(s);
    }
    
    return answer;
}