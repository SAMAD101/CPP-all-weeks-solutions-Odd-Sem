#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int n){
    int i=1;
    for(int j=1; j<=n; j++){
        i *= j;
    }
    return i;
}

int digitsum(int n){
    int sum=0;
    int m=0;
    while(n>0){
        m = n%10;
        sum += m;
        n /= 10;
    }
    return sum;    
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%d", &t);
   // printf("%d", fact(t));
    int nums[t];
    
    for(int i=0; i<t; i++){
        scanf("%d", &(nums[i]));
        fflush(stdin);
    }
    
    for(int i=0; i<t; i++){
        printf("%d\n", digitsum(fact(nums[i])));
    }
    
    return 0;
}




