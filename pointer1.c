#include <stdio.h>

int main(void)
{
    int *p;
    
    int Value;
    p = &Value;
    *p =200;
    printf("address of pointer is %p, and the value is %d",p,*p);
    return 0;
}