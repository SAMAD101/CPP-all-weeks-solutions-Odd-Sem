#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int isAlreadyIn(int arr[], int n){
//     int len = (int)(sizeof(arr)/sizeof(int));
//     for(int i=0; i<len; i++){
//         if(arr[i]==n)
//     }
// }

int main(){
    int arr[9];
    for(int i=0; i<9; i++){
        scanf("%d", &arr[i]);
    }
    
    int cnt=0;
    char flags[99];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(arr[i]==arr[j]){
                cnt++;
                
            }
        }
        if(flags[arr[i]]!='f'){
            printf("%d %d\n", arr[i], cnt);
        }
        flags[arr[i]] = 'f';
        cnt = 0;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
