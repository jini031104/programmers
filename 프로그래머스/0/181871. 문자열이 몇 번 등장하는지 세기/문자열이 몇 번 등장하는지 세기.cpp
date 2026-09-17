#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    int idx = myString.find(pat);
    while(idx != string::npos){
        idx = myString.find(pat, idx + 1);
        answer++;
    }
    
    return answer;
}