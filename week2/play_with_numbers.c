#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t; //1<=t<=1000
    scanf("%d", &t);
    int inp[t]; //1<n<=100000
    
    for(int i=0; i<t; i++){
        scanf("%d", &(inp[i]));
        fflush(stdin);
    }
    
    for(int i=0; i<t; i++){
        if(inp[i]%11==0){
            inp[i] += 2;
        }else if(inp[i]%4==0){
            inp[i] -= 2;
        }else{
            inp[i] *= 4;
        }
    }
    
    for(int i=0; i<t; i++){
        printf("%d\n", inp[i]);
    }
    
    return 0;
}
