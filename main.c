#include <stdio.h>

int factorial(int a)
{
    int i;
    int res = 1;
    for (i=0; i<a; i++)
    {
        res = res * (i+1);
    }

    return res;
}

int combination(int n, int r)
{
    int up, down;
    //분자 계산: up 저장
    up= factorial(n);

    //분모 계산: down 저장
    down= factorial(n-r)*factorial(r);

    return(up/down);
}

int main(void)
{
    //변수 선언
    int result;
    int n, r;
    

    //입력 받기
    //n 입력 문구 찍기
    printf("Input n:");
    //scanf n
    scanf("%d", &n);

    //r 입력 문구 찍기
     printf("Input n:");
    //scanf r
    scanf("%d", &r);



    //combination 계산
    result = combination(n,r);

    //결과 출력
    printf("THe combination result is %i\n", result);

    return 0;
}