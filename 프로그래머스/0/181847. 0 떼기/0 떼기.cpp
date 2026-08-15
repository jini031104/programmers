#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    bool test = false;
    
    for(int i=0; i<n_str.size(); i++){
        if(!test && n_str[i] == '0')
            continue;
        
        answer += n_str[i];
        test = true;
    }
    
    return answer;
}