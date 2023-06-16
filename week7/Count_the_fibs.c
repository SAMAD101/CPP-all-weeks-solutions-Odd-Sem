#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long long i,T,x,y,a,b,c,cnt;
    scanf("%lld",&T);
    for(i=1;i<=T;i++)
    {
        a=1;
        b=1;
        cnt=0;
        scanf("%lld",&x);
        scanf("%lld",&y);
        while(b<=y)
        {
            c=a+b;
            a=b;
            b=c;
            if(c>=x&&c<=y)
                cnt++;
        }

    printf("%lld\n",cnt);
        }
        return 0;
}
