#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 최소 공배수 = 두 수의 곱 / 최대 공약수
int solution(vector<int> arr) {
    int answer = arr[0];
    
    for(int i=1; i<arr.size(); i++){
        int a = min(answer, arr[i]);
        int b = max(answer, arr[i]);
        
        while(b % a != 0) {
            int c = b % a;
            b = a;
            a = c;
        }
        
        answer = (answer * arr[i]) / a;
    }

    return answer;
}