//     1
//    212
//   32123
//  4321234
// 543212345

#include <stdio.h>

int main() {
    int n = 5;  // number of rows

    // loop for rows
    for(int i = 1; i <= n; i++){
        
        // print leading spaces
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }

        // print descending numbers
        for(int j = i; j >= 1; j--){
            printf("%d", j);
        }

        // print ascending numbers (start from 2 to avoid repeating 1)
        for(int j = 2; j <= i; j++){
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
