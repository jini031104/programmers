#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    int count1 = 0, count2 = 0;
    int result = 0;
    
    for(int i=bin1.size() - 1; i>=0; i--){
        if(bin1[i] == '1'){
            if(bin1.size() - 1 == i)
                result+=1;
            else{
                result+=pow(2, count1);
            }
        }
        count1++;
    }
    for(int i=bin2.size() - 1; i>=0; i--){
        if(bin2[i] == '1'){
            if(bin2.size() - 1 == i)
                result+=1;
            else{
                result+=pow(2, count2);
            }
        }
        count2++;
    }
    
    while(result > 0){
        int i = result % 2;
        answer += to_string(i);
        result /= 2;
    }
    if(answer.size() == 0)
        answer += '0';
    
    reverse(answer.begin(), answer.end());
    
    return answer;
}