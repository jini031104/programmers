#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for(int i=0; i<myString.size(); i++)
        myString[i] = toupper(myString[i]);
    
    for(int i=0; i<pat.size(); i++)
        pat[i] = toupper(pat[i]);
    
    answer = myString.find(pat) != -1 ? 1 : 0;
    
    return answer;
}