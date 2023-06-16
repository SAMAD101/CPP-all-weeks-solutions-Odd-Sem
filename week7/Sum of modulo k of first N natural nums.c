#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,T,K,N,j,sum=0;
scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d",&K,&N);
        for(j=1;j<=N;j++)
        {
            sum=sum+j%K;
        }
    printf("%d\n",sum);
    sum=0;
    }
    return 0;
}
