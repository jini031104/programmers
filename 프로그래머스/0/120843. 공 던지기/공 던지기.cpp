#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0, num = 1;
    
    for(int i=1; i<k; i++){
        num += 2;
    }
    
    while(numbers.size() < num){
        num -= numbers.size();
    }
    num -= 1;
    
    return numbers[num];
}