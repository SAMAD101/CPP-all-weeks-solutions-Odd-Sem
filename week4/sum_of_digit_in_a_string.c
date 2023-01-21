#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){
    int l;
    scanf("%d", &l);
    char inp[l];
    for(int i=0; i<=l; i++){
        scanf("%c", &inp[i]);
    }

    printf("The digits present in the string is ");
    int z; char sum = 0;
    for(int i=0; i<=l; i++){
        if(inp[i]>=48 && inp[i]<= 57){
            printf("%c", inp[i]);
            z = inp[i] - '0';
            sum += z;
        }
    }
    printf("\nThe sum of digits is %d", sum);
    return 0;
}
