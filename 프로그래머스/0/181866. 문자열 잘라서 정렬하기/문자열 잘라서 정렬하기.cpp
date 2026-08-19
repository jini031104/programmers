#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string s = "";
    
    for(int i=0; i<myString.length(); i++){
        if(myString[i] == 'x') {
            if(s != "") {
                answer.push_back(s);
                s = "";
            }
            continue;
        }
        else {
            s += myString[i];
        }
    }
    
    if(s != "")
        answer.push_back(s);
    
    sort(answer.begin(), answer.end());
    
    return answer;
}