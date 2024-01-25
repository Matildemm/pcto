#include <stdio.h>
#include <math.h>
int main()

{
    int a;
    int b;
    int c;
    int x;
    int delta;
    int x1;
    int x2;

    printf("inserisci 3 valori");
    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);
    delta = (b * b -4 * a * c);
    printf("delta è uguale a : %d" ,delta);
    x1= (-(b)-(sqrt (delta))) / (2 * a);
    x2= (-(b)+(sqrt (delta))) / (2 * a);
    if(delta == 0)
    {
        printf("le soluzioni sono uguali: x1 = x2");
    }
    else if(delta<0)
    {
        printf("non ci sono soluzioni reali");
    }
    else
    {
        printf("le soluzioni sono: x1");
    }
}

