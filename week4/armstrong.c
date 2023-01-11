#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int isArmstrong(int n){
    /* Verifies if a number is Armstrong or not. */
    int temp=n;
    int p=0; //No. of digits, this will be used as power.
    while(temp>=1){
        temp = temp/10;
        p++;
    }
    
    int digits[p];
    temp = n;
    for(int i=1; i<=p; i++){
        digits[i-1] = temp%10;
        temp = (int)(temp/10);
    }
    
    int sum=0;
    for(int i=0; i<p; i++){
        sum += (int)pow(digits[i], p);
    }
    
    if(sum==n){return 1;}
    else{return 0;}
}

int main() {
    int t;
    scanf("%d", &t);
    int inps[t][2];
    for(int i=0; i<t; i++){
        scanf("%d %d", &inps[i][0], &inps[i][1]);
    }
    
    for(int i=0; i<t; i++){
        for(int j=inps[i][0]; j<=inps[i][1]; j++){
            if(isArmstrong(j)){
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}