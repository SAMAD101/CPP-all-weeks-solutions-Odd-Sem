#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int digit_sum(int n){
   int sum = 0;
   if(n/10 < 0.0){
       return n;
   }
   while (n > 0){
       sum = sum + n % 10;
       n = n/10;
   }
   return sum;
}
 
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    scanf("%d", &num);
    
    int ds=10;
    while(ds>=10){
        ds = digit_sum(num);
    }
    printf("%d", ds);
    
    return 0;
}
