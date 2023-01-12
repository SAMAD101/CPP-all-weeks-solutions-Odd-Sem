#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void rotate(int *arr, int size, int n){
    int temp[size];
    for(int i=0; i<size; i++){
        temp[i] = arr[i];
    }
    for(int i=n+1; i<size; i++){
        arr[i-n-1] = temp[i];
    }
    for(int i=n; i<size; i++){
        arr[i] = temp[i-n];
    }
}

int main() {
    int size, n;
    scanf("%d\n%d", &size, &n);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    rotate(arr, size, n);

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
