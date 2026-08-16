#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    
    if(arr1.size() < arr2.size()){
        return -1;
    }
    else if(arr1.size() > arr2.size()){
        return 1;
    }
    else if(arr1.size() == arr2.size()){
        int num1 = 0, num2 = 0;
        for(int i=0; i<arr1.size(); i++){
            num1 += arr1[i];
            num2 += arr2[i];
        }
        if(num1 < num2)
            return -1;
        else if(num1 > num2)
            return 1;
        else if(num1 == num2)
            return 0;
    }
    
    return answer;
}