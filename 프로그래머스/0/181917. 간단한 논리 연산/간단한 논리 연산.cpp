#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true, num1, num2;
    
    num1 = (x1 == true || x2 == true) ? true : false;
    num2 = (x3 == true || x4 == true) ? true : false;
    answer = (num1 == true && num2 == true) ? true : false;
    
    return answer;
}