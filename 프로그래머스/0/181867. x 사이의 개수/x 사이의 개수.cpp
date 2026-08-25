#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int count = 0;
    int len = myString.length();
    
    for(int i=0; i<len; i++){
        printf("%c ", myString[i]);
        if(myString[i] == 'x'){
            printf("!! ");
            answer.push_back(count);
            count = 0;
        } else {
            count++;
        }
    }
    
    answer.push_back(count);
    
    return answer;
}