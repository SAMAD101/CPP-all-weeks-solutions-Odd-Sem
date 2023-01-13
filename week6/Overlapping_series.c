#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void del_item(int arr[][2], int len, int index){
    for(int i=index; i<len; i++){
        if(i==(len-1)){
            arr[i][0] = 0;
            arr[i][1] = 0;
        }else{
            arr[i][0] = arr[i+1][0];
            arr[i][1] = arr[i+1][1];
        }
    }
}

int main() {
    int size;
    scanf("%d", &size);
    int s = size;
    int arr[size][2];
    for(int i=0; i<size; i++){
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    
    for(int i=0; i<size; i++){
       for(int j=0; j<s; j++){
            if(arr[i][0]>arr[j][0] && arr[i][1]<arr[j][1] && i!=j){
                del_item(arr, s, i);
                s--;
            }
       }
    }

    for(int i=0; i<s; i++){
        printf("%d %d\n", arr[i][0], arr[i][1]);
    }



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
