#include <stdio.h>
#include <stdlib.h>
#include "data_loader.h"

int* load_data(const char* filename, int* size) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        printf("Erreur lors de l'ouverture du fichier %s\n", filename);
        return NULL;
    }

    fread(size, sizeof(int), 1, file);

    int *data = malloc(*size * sizeof(int));

    fread(data, sizeof(int), *size, file);
    fclose(file);

    return data;
}