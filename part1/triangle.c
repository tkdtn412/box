#include<stdio.h>

int main(void){
    int length;
    int height;
    int area;
    
    printf("input triagle height and length: ");
    scanf("%d %d", &length, &height);
    area = length * height / 2;
    printf("삼각형의 넓이는 : %.2f\n", area);
                                            
    return 0;
}