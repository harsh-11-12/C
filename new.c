//     *
//    **
//   ***
//  ****
// *****

#include <stdio.h>

int main() {
    int n = 5;

    for(int i = 1; i <= 5; i++){

        // For printing n - 1 spaces Before Stars itteration
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }
        
        // For printing stars 
        for (int k = 1; k <= i; k++){
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}