#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    
    int a = myString.rfind(pat);
    
    for(int i=0; i<a + pat.size(); i++){
        answer += myString[i];
    }
    
    return answer;
}