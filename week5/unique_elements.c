#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[10];
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    int count=0;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if((arr[i]==arr[j]) && (i!=j)){
                count++;
            }
        }
        if(count==0){
            printf("%d ", arr[i]);
        }
        count = 0;
    }
    /* Enter your code here. Read arrut from STDIN. Print output to STDOUT */    
    return 0;
}

