#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    for(int i=0; i<num_list.size(); i++){
        int num = num_list[i];
        while(1){
            if(num == 1)
                break;
            
            if(num % 2 == 0)
                num /= 2;
            else{
                num -= 1;
                num /= 2;
            }
            answer++;
        }
    }
    
    return answer;
}