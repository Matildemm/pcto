#include <stdio.h>
int main()
{
    int m;
    printf("inserisci la tua età/n");
    scanf("%d" , &m);
    if(m>=18)
    {
        printf("x è maggiore di 18/n");
    }
    else 
    {
        printf("x è minore di 18/n");
    }
    return(0);
}