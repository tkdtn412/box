#include <stdio.h>
#include <limits.h>

#define END_HELLO "end of file\n"
int main(void)
{
    printf("char_bit : %d\n", CHAR_BIT);
    printf("char_max : %d\n", CHAR_MAX);
    printf("INT_MIN : ");

    printf("long_min : %ld \t long_max : %d\n", LONG_MIN , LONG_MAX);
    return 0;
}