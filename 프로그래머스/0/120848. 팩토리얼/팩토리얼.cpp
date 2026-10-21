#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int num = 1;
    
    while(1){
        num *= answer;
        if(num == n)
            break;
        else if(num >= n){
            answer--;
            break;
        }
        answer++;
    }
    
    return answer;
}