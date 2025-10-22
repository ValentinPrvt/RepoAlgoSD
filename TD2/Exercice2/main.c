#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"
#include "utils.h"
#include "data_loader.h"

void test_sort(void (*sort_func)(int*,int), const char* name, int *data, int size) {
    int *test_data=malloc(size*sizeof(int));
    copy_array(data,test_data,size);
    clock_t start=clock();
    sort_func(test_data,size);
    clock_t end=clock();
    double temps=((double)(end-start))/CLOCKS_PER_SEC;
    printf("%s: %.4f s\n",name,temps);
    free(test_data);
}

int main(void) {
    int size;
    int *data=load_data("data.bin",&size);
    printf("\n=== Comparaison des algorithmes (%d elements) ===\n\n", size);
    test_sort(selection_sort,"Selection Sort",data,size);
    test_sort(insertion_sort,"Insertion Sort",data,size);
    test_sort(bubble_sort,"Bubble Sort",data,size);
    printf("\n");
    test_sort(merge_sort,"Merge Sort",data,size);
    test_sort(quick_sort,"Quick Sort",data,size);
    return 0;
}