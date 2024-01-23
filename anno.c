#include <stdio.h>
int main()
{
    int anno;
    printf("inserisci un anno");
    scanf("%d" , &anno);
    if(anno%4 == 0)
    {
        printf("è bisestile");
    }
    else
    {
        printf("non è bisestile");
    }
    return(0);
}
