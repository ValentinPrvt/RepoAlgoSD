#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prime.h"

void main(void) {
    int n = 100000;
    int *tab = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) tab[i] = -1;
    clock_t start, end;
    double seconds;
    
    start = clock();
    printf("%d\n", primeEfficient(n, tab));
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    printf("temps d'execution pour la version efficiente : %f\n", seconds);
    
    start = clock();
    printf("%d\n", primeNaive(n));
    end = clock();
    seconds = (double)(end - start) / CLOCKS_PER_SEC;
    printf("temps d'execution pour la version naive : %f\n", seconds);
}