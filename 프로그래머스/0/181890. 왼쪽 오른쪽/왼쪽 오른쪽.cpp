#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    
    if(find(str_list.begin(), str_list.end(), "l") != str_list.end() ||
       find(str_list.begin(), str_list.end(), "r") != str_list.end()){
        int indexL = find(str_list.begin(), str_list.end(), "l") - str_list.begin();
        int indexR = find(str_list.begin(), str_list.end(), "r") - str_list.begin();
        
        if(indexL > indexR && indexR != -1){
            for(int i=indexR + 1; i<str_list.size(); i++){
                answer.push_back(str_list[i]);
            }
        } else if(indexL < indexR && indexL != -1){
            for(int i=0; i<indexL; i++){
                answer.push_back(str_list[i]);
            }
        }
    }
    
    return answer;
}