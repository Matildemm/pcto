#include <stdio.h>
int main()
{
    int n1;
    int n2;
    int n3;
    printf("inserisci tre numeri interi");
    scanf("%d" , &n1);
    scanf("%d" , &n2);
    scanf("%d" , &n3);
    if (n2-n1==n3-n2)
    {
        printf("è una progressione aritmetica");
    }
    else
    {
        printf("non è una progressione");
    }
    return(0);
}