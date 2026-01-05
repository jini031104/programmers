#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int n) {
    int answer = 2;
    int a = sqrt(n);
    
    answer = a*a == n ? 1:2;
    
    return answer;
}