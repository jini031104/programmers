#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string s = "";
    
    for(int i=0; i<my_str.size(); i++){
        s += my_str[i];
        if(s.size() % n == 0){
            answer.push_back(s);
            s = "";
        }
    }
    
    if(s.size())
        answer.push_back(s);
    
    return answer;
}