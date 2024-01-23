#include <stdio.h>
int main()
{
    int x;
    int y;
    printf("Inserisci a quanti anni si può prendere la patente");
    scanf("%d" , &x);
    printf("inserisci l'età di matilde");
    scanf("%d" , &y);
    if (y>=x)
    {
        printf("può prendere la patente");
    }
    else 
    {
        printf("non può prendere la patente");
    }
    return(0);
}