#include <stdlib.h>
#include "prime.h"

int primeNaive(int n){
    int count = 0;
    int ispremier = 0;
    for (int i = 2; i < n; i++){
        ispremier = 1;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                ispremier = 0;
                break;
            }
        }
        if (ispremier == 1){
            count += 1;
        }
    }
    return count;
}

int primeEfficient(int n, int tab[]){ 
    if (n <= 2) return 0;
    for (int i = 0; i < n; i++) 
        tab[i] = 1;
    tab[0] = tab[1] = 0;
    int count = 0;
    for (int i = 2; i < n; i++){
        if (tab[i] == 1) {
            count++;
            if ((long long)i * i < n) {
                for (int j = i * i; j < n; j += i) 
                    tab[j] = 0;
            }
        }
    }
    return count;
}