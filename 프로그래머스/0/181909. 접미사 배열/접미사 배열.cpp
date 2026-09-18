#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    for(int i=0; i<my_string.size(); i++){
        string s;
        for(int j=i; j<my_string.size(); j++){
            s += my_string[j];
        }
        answer.push_back(s);
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}