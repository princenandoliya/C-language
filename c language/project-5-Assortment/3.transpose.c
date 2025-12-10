#include <stdio.h>

int main() {

    int n[3][3],p[3][3];

   
    printf("Enter 9 values:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &n[i][j]);
        }
    }

    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           p[j][i] = n[i][j];
        }
    }

    
    printf("Transpose matrix of an array:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}