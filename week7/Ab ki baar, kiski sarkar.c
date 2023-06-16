#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int h,m[100],cnt=0,i,j,T,k,H,a=0;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    { 
        scanf("%d",&H);
        h=0;
        for(j=1;j<=H;j++)
        {
            scanf("%d",&m[j]);
        }
     for(j=1;j<=100;j++)
     {
         cnt=0;
         for(k=1;k<=H;k++)
         {
            if(j==m[k])
                cnt++;
         }
     if(cnt>h)
     {
         a=j;
         h=cnt;
     }     
     }
    if(h>H/2)
    {
    printf("%d\n",a);
     }
    else
    {
        printf("void\n");
    }
    }
return 0;
}
