#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    vector<string> s;
    
    for(int i=0; i<array.size(); i++){
        s.push_back(to_string(array[i]));
    }
    
    for(int i=0; i<s.size(); i++){
        for(int j=0; j<s[i].size(); j++){
            if(s[i][j] == '7')
                answer++;
        }
    }
    
    return answer;
}