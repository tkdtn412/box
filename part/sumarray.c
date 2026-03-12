// random으로 int10개 배열
// 만들어 랜덤값넣고 총합프로그램

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){
        int array[10];
        srand(time(NULL));
        for(int i=0;i<10;i++){
            array[i]=rand()%6 +1;
            printf("%d", array[i]);
        }
        return 0;
    }