//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>

int main() {
    int n = 5;  // half height of the kite

    // upper half
    for(int i = 1; i <= n; i++) {

        // print spaces
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // print stars
        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // lower half
    for(int i = n; i >= 1; i--) {

        // print spaces
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // print stars
        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
