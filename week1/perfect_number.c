#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num, rem, sum = 0, i;  
    scanf("%d", &num);      
  
    for(i = 1; i < num; i++)  
         {  
             rem = num % i;  
             if (rem == 0){sum = sum + i;}  
         } 
    
         if (sum == num){printf("yes");}
         else{printf("no");}
    
    return 0;
}  
    

