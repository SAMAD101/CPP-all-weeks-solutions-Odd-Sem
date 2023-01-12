#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void transpose(int mat[][3]){
    int temp_mat[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            temp_mat[i][j] = mat[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            mat[i][j] = temp_mat[j][i];
        }
    }
}

int main() {
    int mat[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    transpose(mat);

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", mat[i][j]);
        }
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
