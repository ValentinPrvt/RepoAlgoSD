#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *file = fopen("data.bin", "wb");
    if (!file) {
        printf("Erreur lors de la création du fichier\n");
        return 1;
    }

    srand(time(NULL));
    int n = 100000;

    fwrite(&n, sizeof(int), 1, file);

    for (int i = 0; i < n; i++) {
        int value = rand();
        fwrite(&value, sizeof(int), 1, file);
    }

    fclose(file);
    printf("Fichier data.bin cree avec %d valeurs aleatoires\n", n);
    return 0;
}