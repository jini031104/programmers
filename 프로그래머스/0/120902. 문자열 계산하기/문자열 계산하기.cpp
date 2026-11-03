#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<string> v;
    stringstream stream;
    stream.str(my_string);
    string test;
    
    while(stream >> test)
        v.push_back(test);
    
    answer = stoi(v[0]);
    
    for(int i=1; i<v.size()-1; i+=2){
        if(v[i] == "+")
            answer += stoi(v[i+1]);
        else
            answer -= stoi(v[i+1]);
    }
    
    return answer;
}