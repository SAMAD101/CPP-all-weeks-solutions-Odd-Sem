#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int inp;
    scanf("%d", &inp);
    
    //Making a string of the binary value of inp
    int required_size = (int)log2((double)inp)+2;
    char bin[required_size];
    int i = required_size-2;
    while(i >= 0){
        if(inp%2 == 0){
            bin[i] = '0';
        }else{
            bin[i] = '1';
        }
        i--;
        inp = (int)inp/2;
        //printf("inp = %d\n", inp);
    }
    bin[required_size-1] = '\0';

    //Converting the binary string to it's complement
    char *ptr = bin;
    while(*ptr != '\0'){
        if(*ptr == '0'){
            *ptr = '1';
        }else{
            *ptr = '0';
        }
        ptr++;
    }
    
    //Getting the corresponding integer value
    int power = required_size-2;
    int n = 0;
    char *ptr1 = bin;
    while(*ptr1 != '\0'){
        if(*ptr1 == '0'){
            n += 0;
        }else{
            n += (int)pow(2, power);
        }
        power--;
        ptr1++;
    }
    printf("%d", n);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}