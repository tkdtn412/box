#include<stdio.h>
#include <string.h>

int main()
{
    char fruit[20] = "strawberry";
    printf("딸기 : %s", fruit);
    printf("딸기잼: %s %s\n", fruit, "jam");
    
    
    printf("바나나 : %s\n", fruit);
    // strcpy fuit =.>> apple
    fruit[0] = 'a';
    fruit[0] = 'p';
    fruit[0] = 'p';
    fruit[0] = 'l';
    fruit[0] = 'e';
    printf("사과 : %s\n", fruit);

return 0;
}