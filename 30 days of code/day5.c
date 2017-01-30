#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, result; 
    
    scanf("%d",&n);
    for(int i = 1; i < 11; i++){
        result = 0;
        result = n * i;
        printf("%d x %d = %d\n",n, i, result);
    }
    return 0;
}
