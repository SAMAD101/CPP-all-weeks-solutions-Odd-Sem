#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void del_item(int *arr, int len, int index){
    for(int i=index; i<len; i++){
        if(i==(len-1)){
            arr[i] = 0;
            break;
        }
        arr[i] = arr[i+1];
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int inp[6];
    for(int i=0; i<6; i++){
        scanf("%d", &inp[i]);
    }
    
    del_item(inp, 6, 2);

    for(int i=0; i<5; i++){
        printf("%d ", inp[i]);
    }
    
    return 0;
}
