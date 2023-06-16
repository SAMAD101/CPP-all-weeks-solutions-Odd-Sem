#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
    long int a[10],N,j=0,cnt=0,r=0,sum=0,R;
    scanf("%ld",&N);
    R=N;
    while(N!=0)
    {
        cnt++;
        N=N/10;
    }    
    for(j=cnt;j>=1;j--)
    {
        r=R%10;
        {
            a[j-1]=r;
        }
        R=R/10;
    }
    for(j=0;j<cnt;j=j+2)
    {
        sum=sum+a[j];
    }
printf("%ld",sum);
cnt=0;
printf("\n");

    }
return 0;
}
