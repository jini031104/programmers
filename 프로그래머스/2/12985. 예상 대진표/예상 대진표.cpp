#include <iostream>

using namespace std;

int numSet(int num) {
    return num / 2 + (num % 2);
}

int solution(int n, int a, int b)
{
    int answer = 1;
    int round = n/2;
    int nA = a, nB = b;
    
    for(answer; answer<round; answer++) {
        int del = nA - nB;
        
        cout << "nA: " << nA << endl;
        cout << "nB: " << nB << endl;
        cout << del << endl;
        
        if(del == 1 && (nA % 2 == 0))
        {
            break;
        }
        else if(del == -1 && (nB % 2 == 0))
        {
            break;
        }
        
        nA = numSet(nA);
        nB = numSet(nB);
    }

    return answer;
}