#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int findMax(int *arr, int len){
    int max = arr[0];
    for(int i=1; i<len; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[6];
    for(int i=0; i<6; i++){
        scanf("%d", &arr[i]);
    }
    
    int max = findMax(arr, 6);
    printf("%d\n", max);

    int scnMax = arr[0];
    for(int i=0; i<6; i++){
        if((arr[i] > scnMax) && (arr[i]!=max)){
            scnMax = arr[i];
        }
    }
    printf("%d", scnMax);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
