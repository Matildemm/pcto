#include <stdio.h>
int main()
{
    int lato1;
    int lato2;
    int lato3;

    printf("inserisci lunghezza lato1/n");
    scanf("%d" , &lato1);
    printf("inserisci lunghezza lato2/n");
    scanf("%d" , &lato2);
    printf("inserisci lunghezza lato3/n");
    scanf("%d" , &lato3);
    if((lato1 == lato2) && (lato2 == lato3) && (lato1 == lato3))
    {
        printf("il triangolo è equilatero");
    }
    else if ((lato1 == lato3) && (lato1 != lato3) && (lato2 != lato3) || (lato2 == lato3) && (lato2 != lato1) && (lato3 != lato1) || (lato1 == lato3) && (lato1 != lato2) && (lato3 != lato2))
    {
        printf("il triangolo è isoscele");
    }
    else if ((lato1 != lato2) && (lato2 != lato3) && (lato1 != lato3))
    {
        printf("il triangolo è scaleno");
    }
    else 
    {
        printf("errore");
    }
} 