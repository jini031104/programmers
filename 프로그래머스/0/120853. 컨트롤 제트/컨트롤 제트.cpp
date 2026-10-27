#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> v;
    stringstream stream;
    
    stream.str(s);
    string test;
    while(stream >> test)
        v.push_back(test);
    
    for(int i=0; i<v.size(); i++){
        if(v[i] != "Z")
            answer += stoi(v[i]);
        else
            answer -= stoi(v[i-1]);
    }
    
    return answer;
}