#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    { int r=0;
        scanf("%d",&n);
        while(n>0&&r<n)
        {
        n=n-(2*r+1);
            
        r++;
        }
    printf("%d\n",r);
    }
    
    return 0;
}
