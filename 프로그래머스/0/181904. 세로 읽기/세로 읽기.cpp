#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    int i= c - 1;
    for(i; i<my_string.size(); i+=m){
        answer += my_string[i];
    }
    
    return answer;
}