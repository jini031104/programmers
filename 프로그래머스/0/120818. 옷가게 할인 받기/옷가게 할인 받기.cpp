#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    float sale = 0;
    
    if(500000 <= price)
        sale = price * 0.2;
    else if(300000 <= price)
        sale = price * 0.1;
    else if(100000 <= price)
        sale = price * 0.05;
    
    return price - sale;
}