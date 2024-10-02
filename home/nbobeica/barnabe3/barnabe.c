#include <stdio.h>
#include <stdbool.h>

// Fonction pour calculer le n-ième nombre de Fibonacci
unsigned long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// Fonction pour vérifier si un nombre est premier
bool est_premier(unsigned long long num) {
    if (num < 2) return false;
    for (unsigned long long i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Fonction pour trouver le premier nombre premier après un certain nombre
unsigned long long trouver_premier_apres(unsigned long long num) {
    num++; // Commencer la recherche juste après le nombre donné
    while (!est_premier(num)) {
        num++;
    }
    return num;
}

int main() {
    int n;
    printf("Entrez l'indice du nombre de Fibonacci que vous voulez (n >= 0): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("L'indice doit être un nombre entier positif.\n");
        return 1;
    }

    // Calculer le n-ième nombre de Fibonacci
    unsigned long long result = fibonacci(n);
    printf("Le nombre de Fibonacci à l'indice %d est: %llu\n", n, result);

    // Calculer le 21ème nombre de Fibonacci
    unsigned long long fibonacci_21 = fibonacci(21);
    printf("Le 21ème nombre de Fibonacci est: %llu\n", fibonacci_21);

    // Trouver le premier nombre premier après le 21ème nombre de Fibonacci
    unsigned long long distance = trouver_premier_apres(fibonacci_21);
    printf("Le premier nombre premier après %llu est: %llu\n", fibonacci_21, distance);

    // Coordonnées initiales (changement des valeurs)
    int position_x = -36;
    int position_y = 44;

    // Ajout de la variable 'distance' à la position y uniquement
    position_y += distance;

    // Affichage des nouvelles coordonnées
    printf("Nouvelle position de Barnabe: (x = %d, y = %d)\n", position_x, position_y);

    return 0;
}

