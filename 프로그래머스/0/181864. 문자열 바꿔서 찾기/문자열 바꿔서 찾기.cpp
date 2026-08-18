#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string change = "";
    
    for(int i=0; i<myString.length(); i++){
        if(myString[i] == 'A')
            change += 'B';
        else
            change += 'A';
    }
    
    answer = string::npos != change.find(pat) ? 1 : 0;
    
    return answer;
}