#include<stdio.h>
int main()
{
    int input_sec,hr,Min,sec;
    printf("초:"), scanf("%d",&input_sec);
    hr=input_sec/3600;
    Min=input_sec%3600/60;
    sec=input_sec%60;
    printf("%2d시간 %2d분 %2d초입니다\n",hr,Min,sec);

    return 0;
}