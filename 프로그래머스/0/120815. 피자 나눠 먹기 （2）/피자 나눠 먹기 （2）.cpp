#include <string>
#include <vector>

using namespace std;

// a > b
int gcd(int a,int b){
    int r;
    while(1){
        int r = a%b;
        if(r==0)
            return b;
        a = b;
        b = r;
    }
}

int lcm(int a,int b)
{
    return a*b/gcd(a,b);
}

int solution(int n) {
    int answer = 0;
    
    int a = n > 6 ? n : 6;
    int b = n < 6 ? n : 6;
    printf("a: %d, b: %d\n", a, b);
    
    answer = lcm(a, b) / 6;
    
    return answer;
}