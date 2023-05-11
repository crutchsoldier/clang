#include<stdio.h>
int main(){
    int nini, nana;
    int total, deposit, change, rest, menu;
    int w500 , w100, w50, w10;
    int cnt_nini, cnt_nana;
    while(1)
    {
    printf("니니 70원 나나 30원 입니다.\n");
    printf("각각의 개수를 띄어서 입력하시오.\n");
    scanf("%d %d",&cnt_nini,&cnt_nana);
    nini = 70*cnt_nini;
    nana = 30*cnt_nana;
    total = nini + nana;
    printf("총 금액은 %d 입니다\n",total);
    scanf("%d ", &deposit);
    if(deposit>total){
        change = deposit -total; 
        w500 = change /500;
        rest= change % 500;
        w100 = rest % 100;
        rest =rest % 100;
        w50 = rest /  50;
        rest = rest %50;
        w10 = rest/ 10;
        printf("니니 전체 금액; : %d\n", nini);
        printf("나나 전체 금액 : %d\n", nana);
        printf("거스름돈 : %d\n", change);
        printf("#### 거스름돈 동전의 최소 개수 ####\n\n");
        printf(" 500원 : %d개\n", w500);
        printf("100원 : %d개\n", w100);
        printf("50원 : %d개\n", w50);
        printf("10원 :%d개\n ",w10);
        printf("\n##################################\n\n");
        printf("계속하시겠습니까? 다시 입력하려면 1 나가려면 0 을 눌러주세요");
        scanf("%d , &menu");
        if(menu==0) break;
        else continue;
    }
    else {
        printf("금액이 부족합니다 . 다시 입력하려면 1 나가려면 0을 눌러주세요");
        scanf("%d",&menu);
        if(menu==0) break;
        else continue;
    }


    }

return 0;

    }
    


