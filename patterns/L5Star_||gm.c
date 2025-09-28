//     *****
//    *****
//   *****
//  *****
// *****

#include <stdio.h>

int main() {
    int n = 5;  // number of rows

    // loop for rows
    for(int i = 1; i <= n; i++){

        // print leading spaces
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }
        
        // print stars (fixed 5 stars in each row)
        for(int j = 1; j <= 5; j++){
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
