#include<stdio.h>
int div(int n, int i);

int solution(int n)
{
    int i = 1;
    int answer = 0;
    //재귀 함수 시작
    answer = div(n, i);
    return answer;
}

int div(int n, int i)
{
    // n% 1 문제조건 만족 리턴 
    if (n % i == 1)
    {
        return i;
    }

    else
    {
        //아니면 다시 재귀로 호출
        return(div(n, ++i));
    }
}

int main()
{
    int n[5] = { 1, 12, 8, 34, 99};
    int i;
    for(i=0; i < 5; i++)  
        printf("%d일때  : %d\n", n[i], solution(n[i]));
}