#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = array[0];
    int min = abs(array[0] - n);
    
    for(int i=1; i<array.size(); i++){
        if(abs(array[i] - n) < min){
            min = abs(array[i] - n);
            answer = array[i];
        } else if(abs(array[i] - n) == min){
            printf("%d: %d\n", array[i], min);
            if(array[i] <= array[i-1])
                answer = array[i];
            else
                answer = array[i-1];
        }
    }
    
    return answer;
}