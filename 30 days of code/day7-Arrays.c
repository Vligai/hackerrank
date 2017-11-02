#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, size, temp, last;
    size = 0;
    scanf("%d",&n);
    int *arr = malloc(sizeof(int) * n);
    last = n-1;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    size = sizeof(arr);
    for(int i = 0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[last];
        arr[last] = temp;
        last--;
    }   
    for(int j = 0; j<n; j++){
        printf("%d ", arr[j]);
    }
    //printf("%d",size);
    return 0;
}