#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    bool b = false;
    string s = to_string(num);
    
    for(int i=0; i<s.length(); i++){
        answer += 1;
        if(k == s[i] - '0'){
            b = true;
            break;
        }
    }
    
    if(!b)
        answer = -1;
    
    return answer;
}