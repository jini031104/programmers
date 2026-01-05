#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    for(int i=5;i>0;i-=2) {
        answer += hp/i;
        hp=hp%i;
    }
    return answer;
}