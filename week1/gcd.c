#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int gcd(int a, int b){
    int g=1;
    if(a<b){g=a;}
    else{g=b;}
    
    while(g>1){
        if(a%g==0 && b%g==0){
            return g;
        }
        g--;
        continue;
    }
    return g;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);
    int inps[t][2];
    
    for(int i=0; i<t; i++){
        scanf("%d %d", &(inps[i][0]), &(inps[i][1]));
        fflush(stdin);
    }
    
    for(int i=0; i<t; i++){
        printf("%d\n", gcd(inps[i][0], inps[i][1]));
    }
    
    return 0;
}
