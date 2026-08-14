#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int x = a % 2;
    int y = b % 2;
    
    if(x == 1 && y == 1)
        return a*a + b*b;
    else if(x == 1 && y == 0 || x == 0 && y == 1)
        return 2 * (a+b);
    
    return abs(a - b);
}