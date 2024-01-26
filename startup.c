#include <stdio.h>
int main()
{
    char nome[50];
    char eta[50];
    char email[50];
    char s[50];
    char esperienze[50];
    
    char x[50];
    char y[50];
    char z[50];
    char t[50];
    char b[50];
    char c[50];




    printf("iserisci il tuo nome\n");
    scanf("%s", nome);

    printf("inserisci l'età\n");
    scanf("%s" , eta);

    printf("inserisci la tua email\n");
    scanf("%s" , email);

    printf("è la prima volta che ti trucchi\n");
    printf("-1 si\n-2 no\n-3 no però vorrei cambiare metodo\n");
    scanf("%s" , s);

    printf("hai mai avuto brutte esperienze negli altri store\n");
    printf("-1 si\n-2 no\n-3 non sempre\n");
    scanf("%s" , esperienze);

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

    printf("inserisci che tipo di trucco vuoi ottenere\n");
    printf("-1 glowy\n-2 matte\n-3 natural\n-4 party\n");
    scanf("%s", c);


    printf("hai inserito queste caratteristiche\n %s\n%s\n%s\n%s\n%s\n Ciao Elisa,\n abbiamo elaborato i tuoi dati e riteniamo che il trucco per te consigliato comprende:\n un primer matte e opacizzante make up forever\n un fondotinta dior backstage n01\n correttore tarte n21\n cipria hudabeuty lucent white\n bronzer benefit hoola\n blush pink lady charlotte tibury\n illuminante diamond fenty beuty\n mascara allungante bang benefit\n eyeliner sephora\n palette occhi anastasia beverly hills soft glam\n gel fissante per le sopracciglia benefit\n matita labbra charlotte tilbury pink pillow\n gloss labbra 03 dior\n ", x, y, z,t, b);
    return(0);
}