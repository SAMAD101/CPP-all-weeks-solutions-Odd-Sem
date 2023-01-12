#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int *arr, int l){
    int sum=0;
    for(int i=0; i<l; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size=5;
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("%d", sum(arr, size));
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
