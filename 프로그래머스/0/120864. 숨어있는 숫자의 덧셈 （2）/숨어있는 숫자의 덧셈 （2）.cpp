#include <sstream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<int> v;
    
    for(int i=0; i<my_string.size(); i++){
        if(('A' <= my_string[i] || 'z' <= my_string[i]))
            my_string[i] = ' ';
    }
    
    stringstream stream;
    stream.str(my_string);
    string test;
    while(stream >> test)
        v.push_back(stoi(test));
    
    for(int i=0; i<v.size(); i++)
        answer += v[i];
    
    return answer;
}