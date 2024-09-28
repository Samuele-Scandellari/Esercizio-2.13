#include <stdio.h>
int main(void) {
    int giorno1, giorno2,mese1,mese2,anno1,anno2;
    printf("inserire il giorno della prima data");
    scanf("%d",&giorno1);
    printf("inserire il mese della prima data");
    scanf("%d",&mese1);
    printf("inserire l' anno della prima data");
    scanf("%d",&anno1);
    printf("inserire il giorno della seconda data");
    scanf("%d",&giorno2);
    printf("inserire il mese della seconda data");
    scanf("%d",&mese2);
    printf("inserire l' anno della seconda data");
    scanf("%d",&anno2);
    if (anno1 > anno2) {
        printf("la prima data e' piu' recente");
    }
    else if (anno1 < anno2) {
        printf("la seconda data e' piu' recente");
    }
    else if (mese1 > mese2) {
        printf("la prima data e' piu' recente");
    }
    else if (mese1 < mese2) {
        printf("la seconda data e' piu' recente");
    }
    else if (giorno1>giorno2) {
        printf("la prima data e' piu' recente");
    }
    else {
        printf("la seconda data e' piu' recente");
    }
    return 0;
}