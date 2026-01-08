#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string abc = "abcdefghij";
    string last = "";
    
    while(1){
        if(0 < age / 10 && age / 10 < 10){
            answer += abc[age / 10];
            answer += abc[age % 10];
            break;
        }
        else{
            last += abc[age % 10];
            age /= 10;
            if(age == 0)
                break;
        }
    }
    answer += last;
    
    return answer;
}