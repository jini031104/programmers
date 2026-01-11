#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    int same = false;
    answer += my_string[0];

    for(int i=0; i<my_string.size(); i++){
        same = false;
        
        for(int j=0; j<answer.size(); j++){
            if(my_string[i] == answer[j]) {
                same = true;
                continue;
            }
        }
        if(same == false)
            answer += my_string[i];
    }
    return answer;
}