#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string num = to_string(a) + to_string(b);
    int num2 = stoi(num), num3 = 2 * a * b;

    int answer = num2 > num3 ? num2 : num3;
    
    return answer;
}