// *****
//  ****
//   ***
//    **
//     *

#include <stdio.h>

int main() {
    int n = 5;  

    // loop for rows
    for(int i = n; i >= 1; i--){
        
        // print spaces
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }
        // print stars
        for(int k = 1; k <= i; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
