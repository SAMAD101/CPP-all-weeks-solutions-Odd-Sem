#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    int cnt=0;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if((arr[i]==arr[j]) && (i!=j)){
                cnt++;
            }
        }
        if(cnt){
            printf("%d ", arr[i]);
        }
        cnt = 0;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
