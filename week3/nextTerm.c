#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    //Each term can be found using the formula of 'sum of natural numbers upto n terms'
    printf("%d",(int)((n*(n+1))/2));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}