#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int do_it(int n){
    int nod=0; //NO. of digits
    int temp=n;
    while(temp>1){
        nod++;
        temp = (int)(temp/10);
    }
    temp=n;
    int digits[nod];
    for(int i=0; i<nod; i++){
        digits[i] = temp%10;
        temp = (int)(temp/10);
    }

    int sum = digits[0] + digits[nod-1];
    return sum;
}

int main() {
    int t;
    scanf("%d", &t);
    int arr[t];
    for(int i=0; i<t; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<t; i++){
        printf("%d\n", do_it(arr[i]));
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
