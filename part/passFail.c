//60점 과락 코드

#include<stdio.h>
#include <stdlib.h> //atoi 함수

int main(int argc, char *argv[]){

    int score = atoi(argv[1]);
    //printf("점수 입력:");
    //int s;
   // scanf("%d", &s);
    if(score>=60)
    {
        printf("합격");
    }
    else
    {
        printf("불합격");
    }
    return 0;
}