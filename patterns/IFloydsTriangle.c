// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

#include <stdio.h>

int main() {
    int n = 5;   // total number of rows
    int num = 1; // starting number

    // loop for rows
    for(int i = 1; i <= n; i++){ 

        // loop for numbers in each row
        for(int j = 1; j <= i; j++){
            printf("%d ", num);
            
            num++;       // increase number
        }

        printf("\n");
    }

    return 0;
}
