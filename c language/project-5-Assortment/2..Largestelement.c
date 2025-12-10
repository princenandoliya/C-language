#include <stdio.h>

int main() {

    
    int n[3][3] = {
        {2, 6, 1},
        {3, 4, 7},
        {5, 3, 8}
    };

    int largest = n[0][0];   

   
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {

            if(n[i][j] > largest) {
                largest = n[i][j];
            }
        }
    }

    printf("The largest element is: %d", largest);

    return 0;
}