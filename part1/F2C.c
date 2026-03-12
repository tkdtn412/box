//F>C

#include <stdio.h>

int main()
{
    float T;
    printf("input Fahr temperature : ");
    scanf("%f", &T);
    
    float CT=(T-32)*5/9;
    printf("\n %f", CT);
    return 0;



}


    