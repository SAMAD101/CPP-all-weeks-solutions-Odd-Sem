include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
    long int r=0,a[10],N,cnt=0,j=0;
    scanf("%ld",&N);
    while(N!=0)
    {
        r=N%10;
        N=N/10;
        a[j]=r;
        j++;
    }
        printf("%ld \n",a[0]+a[j-1]);
        j=0;
    }
return 0;
}