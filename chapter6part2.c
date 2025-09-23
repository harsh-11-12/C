#include <stdio.h>

/*call by value
  call by refrence*/

int sum(int,int);
int sum(int a,int b){
    return a+b;
}

int sum1(int *, int *);
int sum1(int *a, int *b){
    *a= 100;
    return (*a +*b);
}

int swap(int *, int *);
int swap(int *a, int *b){
    int new = *a;
    *a = *b;
    *b = new;
}

int main(){
    int x=78,y=79;
    printf("Sum of %d and %d is %d\n",x,y,sum(x,y)); //call by value

    printf("The value of x is :%d\n",x);
    printf("Sum of %d and %d is %d\n",x,y,sum1(&x,&y)); //call by refrence
    printf("The new value of x is :%d\n",x); //call by refrence can change the value

    swap(&x,&y);
    printf("The value of x and y after swapping are %d and %d\n",x,y);
    return 0;
}
