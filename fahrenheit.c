#include <stdio.h>
int main()
{
    float c;
    float f = (9/5)*c+32;
    float k = c + 273.15;
    printf("inserisci una temperatura in celsius\n");
    scanf("%f" , &c);
    printf("%f\n", f);
    printf("%f\n" , k);
    if (c<-273.15)
    {
        printf("errore");
    }
    else
    {
        printf("no errore");
    }
    return(0);
}