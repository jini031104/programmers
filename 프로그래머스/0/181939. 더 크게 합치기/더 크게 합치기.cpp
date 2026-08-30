#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string num1 = to_string(a) + to_string(b), num2 = to_string(b) + to_string(a);
    
    if(stoi(num1) < stoi(num2))
        answer = stoi(num2);
    else if(stoi(num1) > stoi(num2))
        answer = stoi(num1);
    else if(stoi(num1) == stoi(num2))
        answer = stoi(num1);
    
    return answer;
}