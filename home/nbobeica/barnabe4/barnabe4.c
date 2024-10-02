#include <stdlib.h>
#include <stdio.h>

int main(){
        int n = 111222;
        long long somme = 0;


        for (int i = 1; i <= n; i++){
                somme +=i;
        }

        printf("La somme des nombres compris entre 1 et %d est de : %lld\n", n, somme);

        exit(0);
}
