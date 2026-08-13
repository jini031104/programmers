#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int s = n;
    
    while(0 < s) {
        answer += s % 10;
        s /= 10;
    }
    
    return answer;
}