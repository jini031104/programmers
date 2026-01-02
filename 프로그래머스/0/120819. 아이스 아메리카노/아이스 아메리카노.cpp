#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    int coffee = 5500, buy = 0, coin = 0;
    
    buy = money / coffee;
    coin = money % coffee;
    
    answer.push_back(buy);
    answer.push_back(coin);
    
    return answer;
}