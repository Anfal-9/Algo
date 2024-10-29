#include <stdio.h>

void affichage(int *T, int N);
int taille(int N);

int main() {
    int N;
    printf("Donner la taille de tableau: ");
    scanf("%d", &N);

    int T[N]; // Variable-length array (ou utiliser malloc pour une meilleure gestion)
    printf("Donner les elements de tableau:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    affichage(T, N);

    int tailleResult = taille(N);
    printf("Taille de tableau: %d\n", tailleResult);

    return 0;
}

void affichage(int *T, int N) {
    printf("Les elements du tableau: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");
}

int taille(int N) {
    return N;
}
