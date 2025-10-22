#include <math.h>
#include <stdio.h>
#include "search.h"
#include "utils.h"

int linear_search(int *arr, int n, int target)
{
    for (int i=0;i<n;i++){
        if (arr[i]==target) return i;
    }
    return -1;
}

int jump_search(int *arr, int n, int target)
{
    int jump=sqrt(n);
    int left=0;
    while (left<n && arr[min_int(left+jump,n)-1]<target){
        left+=jump;
    }
    for (int i=left;i<min_int(left+jump,n);i++) {
        if (arr[i]==target) return i;
    }

    // jump search on sorted array, return index
    // of target, return -1 if not found
    return -1;
}

int binary_search(int *arr, int n, int target)
{
    int low=0;
    int high=n-1;
    while (low<=high){
        int m=(low+high)/2;
        if (arr[m]==target) return m;
        if (arr[m]>target) high=m-1;
        else low=m+1;
        }
    
    // binary search on sorted array, return index
    // of target, return -1 if not found
    return -1;
}