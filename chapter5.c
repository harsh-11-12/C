#include <stdio.h>

/*here int before sum denotes that the function is going to return an integer
and int inside parenthesis denotes the datatype it is going to work with*/

int sum(int, int);      // function prototype
int factorial(int);

int sum(int x, int y){ // function definition
    printf("sum of two variable is:%d\n", x + y);
    return x + y; //this is a returm value
}

int main(){
    int a , b ,c ;

    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    sum(a, b);    //function call

    sum(13,56);   //function is used directly by giving the integers as arguments   

    c=sum(11,12);    //here return value is stored under c, printing c will show it

    printf("%d\n",c);   //here returm value is printed
    
    int d=factorial(5);  //function is defined after main body
    printf("factorial is %d \n",d);
} 


// recursion
// a function defined can return itself

int factorial(int n){
    if(n==0||n==1){ // base condition
        return 1;
    }
    return factorial(n-1)*n;
}
   


