//scnaf로 입력받은 변수 a, b의 합을 출력 for을 사용해 a~b까지의 합


#include <stdio.h>


int main(){
    int a,b, sum;
    scanf("%d %d", &a,&b);

    if(a>=b)
    {
        for(int i=0;(b+i)>a;i++){
            sum +=b+i;
        }
    }
    else
    {
        for(int i=0;(a+i)>b;i++){
            sum += a+i;
        }
    }
    printf("%d",sum);

// 


    return 0;


}