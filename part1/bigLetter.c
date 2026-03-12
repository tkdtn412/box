#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char c;
    printf("문자를 입력하세요 : ");
    scanf("%c", &c);
    
    bool isUpper = (c >= 'A') && (c <= 'Z');
    printf("isUpper: %d\n", isUpper);
    return 0;
}