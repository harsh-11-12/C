#include <stdio.h>

int main(){
    // char st[] = {'a', 'b', 'c', '\0'};
    char str[] = "abc"; // Same as doing char st[] = {'a', 'b', 'c', '\0'};
    for (int i = 0; i < 3; i++)
    {
    printf("Character is %c \n", str[i]);  
    }
    
    /*string functions*/
    char st[] = "Harry";
    char s1[56] = "Harry";
    char s2[56] = " bhai";
    char target[30];

    printf("%d\n ", strlen(st));

    strcpy(target, st); // target now contains "Harry"
    printf("%s %s\n", st, target);

    strcat(s1, s2); // s1 now contains "helloharry" <no space in between>
    printf("%s\n", s1);

    
    
    return 0;
}