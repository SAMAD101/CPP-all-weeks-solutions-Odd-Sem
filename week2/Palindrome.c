#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n1,n2,r=0;
    scanf("%d %d",&n1,&n2);
    int max=0;
    if(n1>=10 && n1<=100 && n2>=10 && n2<100){
        for(int i=10;i<=n1;i++){
            for(int j=10; j<=n2;j++){
                int m=i*j;
                    int t=m;
                    int tv=0;
                    int nn=0;
                    while(t>0){
                        r=t%10;
                        t=t/10;
                        nn=(nn*10)+r;
                        if(nn==m){
                            tv=1;
                        }
                        }
                if(tv==1){
                    max=m;
                }  
            }
        }
    printf("%d",max);    
    } 
    
    else{
        printf("Not a valid state");
    }
    return 0;
}