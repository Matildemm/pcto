#include <stdio.h>
int main()
{
    char x[50];
    char y[50];
    char z[50];
    char t[50];
    char b[50];
   
    printf("insersci il tuo tipo di pelle\n");
    printf( "-1 pelle secca\n-2 pelle mista\n-3 pelle grassa\n");
    scanf ("%s", x);
    printf("insersci il colore della tua pelle\n");
    printf( "-1 pelle chiara\n-2 pelle mediochiara\n-3 pelle medioscura\n-4 pelle scura\n-5 pelle olivastra\n");
    scanf ("%s", y);
    printf("insersci il tuo colore degli occhi\n");
    printf( "-1 castani\n-2 verdi\n-3 azzurri\n");
    scanf ("%s", z);
    printf("insersci il colore delle tue sopracciglia\n");
    printf( "-1 bionde\n-2 marrone_chiaro\n-3 marrone_scuro\n-4 nere\n");
    scanf ("%s", t);
    printf("inserisci il colore delle tue labbra\n");
    printf("-1 rosate\n-2 chiare\n-3 scure\n");
    scanf("%s" , b);


    printf("hai inserito queste caratteristiche %s\n%s\n%s\n%s\n%s\n il trucco per te consigliato comprende:\n un fondotinta dior backstage n01\n correttore tarte n21\n cipria hudabeuty lucent white\n bronzer benefit hoola\n", x, y, z,t, b);
    return(0);
}