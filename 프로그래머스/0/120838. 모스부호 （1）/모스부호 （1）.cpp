#include <string>
#include <vector>

using namespace std;

string solution(string letter) {
    string answer = "";
    string mos[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    string test[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    
    
    string mosChar = "";
    for(int i=0; i<letter.size(); i++){
        if(letter[i] == ' ') {
            for(int j=0; j<26; j++){
                if(mosChar == mos[j])
                    answer += test[j];
            }
            
            mosChar = "";
            continue;
        }
        
        mosChar += letter[i];
    }
    
    for(int j=0; j<26; j++){
        if(mosChar == mos[j])
            answer += test[j];
    }
    
    return answer;
}