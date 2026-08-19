#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string s = "";
    
    for(int i=0; i<myString.length(); i++){
        myString[i] != 'x' ? s += myString[i] : s += ' ';
    }
    
    string test;
    stringstream stream;
    stream.str(s);
    
    while (stream >> test)
        answer.push_back(test);
    
    sort(answer.begin(), answer.end());
    
    return answer;
}