#include <stdio.h>
int main()
{
    int x;
    int y;
    printf("inserisci il valore di x");
    scanf("%d" , &x);
    printf("inserisci il valoredi y");
    scanf("%d" , &y);
    if(x%y)
    {
        printf("può essere multiplo di x");
    }
    else
    {
        printf("non può essere multiplo di x");
    }
    return(0);
}