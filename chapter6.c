#include <stdio.h>

int main(){
    int i = 10;
    int  *j = &i; // j is pointer pointing i

    printf("The addres of i is:%p\n",&i); // & is carrying address (%p stores hexadecimal)
    printf("The addres of i in integers is: %lu\n",(unsigned long)&i ); //unsigned integers 
    printf("The addres of i in integers is: %lu\n",(unsigned long)j ); //unsigned integers 
    printf("The value of i is %d \n",*j);  //here value is shown 
    printf("The value of i is %d \n",*(&i));
    
    char k='A';
    char* k1=&k;
    printf("The addres of k is:%p\n",&k); 
    printf("The addres of k in integers is: %lu\n",(unsigned long)&k ); 
    printf("The addres of k in integers is: %lu\n",(unsigned long)k1 ); 
    printf("The value of k is %c \n",*(&k));
    printf("The value of k is %c \n",*k1);

    //return 0;

    /*pointer 2 pointer*/
    int a= 19;
    int* b= &a;
    int** c= &b;

    printf("The vale of a is %d\n",a);
    printf("The vale of a is %d\n",*b);
    printf("The vale of a is %d\n",**c);
    printf("The address of a is %p\n",&a);
    printf("The address of b is %p\n",&b);
    printf("The address of c is %p\n",&c);


    /*pointer arithmetic*/
    int z=5;
    int* ptr = &z;
    printf("The address of z is %lu \n",(unsigned long)&z);

    ptr++;
    printf("The address of z is after increasing  %lu \n",(unsigned long)ptr);
// increased by 4 because int is stored in 4 bytes



}      