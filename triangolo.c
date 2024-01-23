#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("inserisci tre numeri per le lunghezze dei lati di un triangolo");
    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);
    if(a+b>c)
    {
        if(b+c>a)
        {
            if(a+c>b)
            {
                printf("possono essere le lunghezze dei lati di un triangolo");
            }
            else 
            {
                printf("non possono essere le lunghezze dei lati di un triangolo");
            }
        }
    }
    return(0);
}