#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    int count = 0;
    
    string a = "", c = "", b = "";
    
    for(int i=0; i<binomial.length(); i++){
        if(binomial[i] == ' '){
            count++;
            continue;
        }
        
        if(count == 0){
            a += binomial[i];
        }
        else if(count == 1){
            c += binomial[i];
        }
        else {
            b += binomial[i];
        }
    }
    int x = stoi(a), y = stoi(b);
    
    if(c == "+")
        answer = x + y;
    else if(c == "-")
        answer = x - y;
    else
        answer = x * y;
    
    return answer;
}