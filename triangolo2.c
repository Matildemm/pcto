#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int base;
    int altezza;
    float area; 
    printf("inserisci le dimensioni di un triangolo");
    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);
    printf("risultato = %d/n" , a+b+c);
    printf("inserisci la base di un triangolo");
    printf("inserisci l'altezza di un triangolo");
    scanf("%d", &base);
    scanf("%d" , &altezza);
    area = (base*altezza)/2;
    printf("l'area del triangolo vale: %.2f" , area);
    return(0);
}