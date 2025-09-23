#include <stdio.h>

int main(){
    int i=0;

    while(i<10){
        printf("The value of i is %d \n",i);
        i++;
    }
    // return 0;

    /*Write a program to print natural numbers from 10 to 20 when initial loop
counter is initialized to 0.*/ 
    int a=0;

    while(a<=20){
        if(a>=10){
            printf("%d\n",a);
        }
    a++;
    }
    // return 0;

    i=i+5;
    printf("The value of i is %d \n",i);
    printf("The new value of i is %d \n",i++); //here first i is printed then value is icreased
    printf("The other value of i is %d \n",++i);// here first value is incnreased
// i+=2  ==  i=i+2
    // return 0;


// do-while loop
    int x;

    printf("Enter the value of x \n");
    scanf("%d",&x);

    do{
        printf("The value of x is %d\n",x);
        x++;
    } while (x<10);

//do while loop runs the statement first and then checks the condition
    // return 0;


//for loop

/* in for loop three pices of codes are used
first is initialisation of code like int i=1;
second is condition like i<z;
third is what is checked after each itteration like i++;*/

    int y;

    printf("Enter the value of y \n");
    scanf("%d",&y);

    for (y;y;y--){ // here 1st y is input value, second y is checking it for a non zero value
        printf("%d\n",y);
    }

// break and continue;

    for(int z=0;z<20;z++){
        if(z==5){
            continue; // continue skips this value and loop moves to next value
        }
        if(z==9){
            break;// here loop terminates
        }
        printf("%d\n",z);
    }
    

}