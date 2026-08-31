#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    stringstream stream;
    
    stream.str(my_string);
    string test;
    while(stream >> test)
        answer.push_back(test);
    
    return answer;
}