#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// dots_rows는 2차원 배열 dots의 행 길이, dots_cols는 2차원 배열 dots의 열 길이입니다.
int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    int answer = 0;
    int row = dots_rows - 1;
    int befor[2], after[2];
    float befor_result, after_result;
    float x, y;
    
    for(int i=0; i<row; i++){
        for(int j=1; j<dots_rows-i; j++){
            int a = i + j;
            befor[0] = i;
            befor[1] = a;
            
            x = dots[befor[0]][0] - dots[befor[1]][0];
            y = dots[befor[0]][1] - dots[befor[1]][1];
            
            befor_result = y / x;
            printf("%d %d 과 %d %d", dots[befor[0]][0], dots[befor[0]][1], dots[befor[1]][0], dots[befor[1]][1]);
            printf("    x: %d  y: %d", abs(x), abs(y));
            printf("    기울기: %d\n", befor_result);
            
            int test = 0;
            for(int x=0; x<dots_rows; x++){
                if(x!=befor[0] && x!=befor[1]){
                    after[test] = x;
                    test++;
                }
            }
            
            x = dots[after[0]][0] - dots[after[1]][0];
            y = dots[after[0]][1] - dots[after[1]][1];
            
            after_result = y / x;
            printf("%d %d 과 %d %d", dots[after[0]][0], dots[after[0]][1], dots[after[1]][0], dots[after[1]][1]);
            printf("    x: %d  y: %d", abs(x), abs(y));
            printf("    기울기: %d\n\n", after_result);
            
            if(befor_result == after_result){
                answer = 1;
            }
        }  
        printf("\n");
    }
    
    return answer;
}