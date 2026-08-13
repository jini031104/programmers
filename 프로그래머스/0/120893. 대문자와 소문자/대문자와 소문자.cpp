#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i=0; i<my_string.length(); i++){
        if('A' <= my_string[i] && my_string[i] <= 'Z')
            answer += tolower(my_string[i]);
        else
            answer += toupper(my_string[i]);
    }
    return answer;
}