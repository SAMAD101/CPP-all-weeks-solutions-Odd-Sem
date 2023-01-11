#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l,r,k;
    scanf("%d", &l);
    scanf("%d", &r);
    scanf("%d", &k);

    int cnt = 0;
    for(int i=l; i<r; i++){
        if(i%k == 0){
            cnt++;
        }
    }

    printf("%d", cnt);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
