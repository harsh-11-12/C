// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 

#include <stdio.h>

int main() {
    int n = 5;  

    // loop for rows
    for(int i = 1; i <= n; i++){

        // loop for columns
        for(int j = 1; j <= i; j++){

            int sum = i + j; // check sum of row and column

            if (sum % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
