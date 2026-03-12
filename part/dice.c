//주사위 임의로

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int dice[30];
    srand(time(NULL));
    dice[0] = rand() % 6 + 1;
    printf("주사위의 숫자는 %d입니다.", dice);
    return 0;
}
