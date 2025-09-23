#include <stdio.h>

int main(){
    int a;            // here a variable a is introduced
    printf("enter the number :\n");
    scanf("%d", &a); //scanf is taking input &a is also nececcery
    printf("The value of a is %d \n",a); //%d stores value in integer and %c in character %f in float
    //return 0;

/*for a multiline comment this is call
this will also work for single line comment*/


    printf("Size of int: %zu bytes\n", sizeof(int)); // \n is a escape character like \t or etc.
    printf("Size of char: %zu byte\n", sizeof(char)); 
    printf("Size of float: %zu bytes\n", sizeof(float)); //this gives size of datatypes
    //return 0;
    

    printf("this is a double inverted comma : \" ,it is printed by the help of escape sequence\n");
    //here \ escapes " and helps it to print it
    //return 0;

    //temp program
    float c ,f;
    printf("Enter the temprature in celsius:\n");
    scanf("%f",&c);
    f=((9.0/5.0)*c +32);
    printf("The temprature in fahrenheit is %f :\n",f);
    //return 0;

    // typecasting
    float y;
    int z;
    printf("Enter the float number:\n");
    scanf("%f",&y);
    z=(int)y;
    printf("the number after typecasting is %d :\n",z);
    return 0;
} 
