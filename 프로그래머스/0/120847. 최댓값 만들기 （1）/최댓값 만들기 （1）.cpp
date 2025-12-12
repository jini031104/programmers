#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int max = 0, max_index, second_max = 0;
    
    for(int i=0; i<numbers.size(); i++){
        if(max < numbers[i]){
            max = numbers[i];
            max_index = i;
        }
    }
    
    for(int i=0; i<numbers.size(); i++){
        if(second_max < numbers[i] && i != max_index)
            second_max = numbers[i];
    }
    
    printf("max: %d, second: %d\n", max, second_max);
    
    return max * second_max;
}