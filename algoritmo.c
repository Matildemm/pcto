#include <stdio.h>
int main()
{
    char lettera;
    char a;
    char e;
    char i;
    char o;
    char u;
    a = 97;
    e = 101;
    i = 105;
    o = 111;
    u = 117;
    printf("inserisci una ");
    scanf("%c" , &lettera);
    if((lettera != a) && (lettera != e) && (lettera != i) && (lettera != o) && (lettera != u))
    {
        printf("la lettera è una consonante/n");
    }
    else
    {
        printf("la lettera non è una consonante/n");
    }
    return(0);
}