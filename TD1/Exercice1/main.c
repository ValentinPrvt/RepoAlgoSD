#include <stdio.h>
#include <time.h> 
#include "fib.h"
void main(void) {
    int n = 45;
    long long int tab[n];
    for (int i = 0; i <= n; i++) tab[i] = -1;
    clock_t start,end;
    double seconds;
    start = clock();
    printf("%i\n", fib_dynamic(n, tab));
    end = clock();
    seconds= (double)(end - start)/CLOCKS_PER_SEC;
    printf("temps d'execution pour la version dynamique : %f\n",seconds);
    start = clock();
    printf("%i\n",fib_naive(n));
    end = clock();
    seconds = (double)(end -  start)/ CLOCKS_PER_SEC;
    printf("temps d'execution pour la version naive : %f\n",seconds);
}