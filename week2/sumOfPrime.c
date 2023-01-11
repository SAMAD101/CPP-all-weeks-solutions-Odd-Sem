#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isprime(int n){
    for(int i=2; i<=((int)(pow(n, 0.5))); i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%d", &t);
    int inp[t];
    
    for(int i=0; i<t; i++){
        scanf("%d", &(inp[i]));
        fflush(stdin);
    }

    int sum = 0;
    for(int i=0; i<t; i++){
        for(int j=2; j<inp[i]; j++){
            if(isprime(j)){
                sum += j;
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }
    
    return 0;
}
