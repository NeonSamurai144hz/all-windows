#include <stdlib.h>
#include <stdio.h>

int main()
{
    char cara;
    int somme = 0;
    int num;
    int resutat;
    do {
        printf("Veuillez bien saisir le nombre\n");
        scanf("%d", &num);
        somme = somme + num;
        printf("La somme est %d, faites '=' pour sortir\n", somme);
        scanf("%c", &cara);
        }
    while (cara != '=');
    exit(0);
}






