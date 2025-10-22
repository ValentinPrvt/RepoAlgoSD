#include "utils.h"

void swap_int(int *a, int *b)
{
    int x=*a;
    *a=*b;
    *b=x;
    // swap two elements
}

bool is_sorted_nondecreasing(int *arr, int n)
{
    for (int i=0;i<n-1;i++){
        if (arr[i+1]<arr[i]) return false;
    }
    return true;
    // check if array is sorted, if yes return true
    // if not return false
}

void copy_array(int *src, int *dst, int n)
{
    for (int i=0;i<n;i++) dst[i]=src[i];
    // copy array elements src into dst
}