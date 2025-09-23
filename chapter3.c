#include <stdio.h>

int main(){
    
// conditional operater(if , else if & else)
    int age;

    printf("Enter the age :\n");
    scanf("%d",&age);

    if(age>=18){        //here parenthesis are accepting condition 
        printf("You are an eligible voter!\n");
    }else{              //and curly braces are holding the statement
        printf("You are underage\n");
    }
    //return 0;


//non zero if
    int a;

    if(1){
        printf("This if is executed!\n");
    }
    if(1.4){
        printf("This if is also executed!(float if)\n");
    }
    if(0){
        printf("This if is not executed!\n"); //as only nonzero if are executed
    }

    printf("Enter a number:\n");
    scanf("%d",&a);

    if(a){
        printf("Since %d is a non zero this if is also executed!\n",a);
    }else{
        printf("This if is not printed because the number entered is zero!\n");
    }
    //return 0;
 

//logical operators and, or & not 
    int b=0, c=0, d=1, e=1 ;

    printf("value of b and c are %d:\n",b&&c); //here && is representing and operator
    printf("value of c and d are %d:\n",c&&d); 
    printf("value of b or d is %d:\n",b||d);   //here || is representing or operator
    printf("value of not(b) is %d:\n",!b);     //here ! is representing not operator

    if( d&&e ){
        printf("both are true\n");
    }
    // is same as writing ....
    if(d){
        if(e){
            printf("both are true\n");
        }
    }
    //return 0;

//else if 
    int age1;

    printf("Enter the age :\n");
    scanf("%d",&age1);

    if(age1>60){
        printf("You can drive and you are a senior citizen\n");
    }
    else if(age1>40){
        printf("You can drive and you are elder\n");
    } 
    else if(age1>18){
        printf("You can drive\n");
    }
    else{
        printf("You cannot drive\n");
    }
    //return 0;

//condition ? expression if true / if false
    int num1,num2;

    printf("Enter number 1:\n");
    scanf("%d",&num1);

    printf("Enter number 2:\n");
    scanf("%d",&num2);
    
    num1>num2?printf("%d is greater number\n",num1):printf("%d is greater number\n",num2);
    //this is a short represntation of if else statement

    //return 0;



//switch program
    int x;

    printf("Enter a number:\n");
    scanf("%d",&x);
    
    switch(x){
        case 1:
            printf("You entered 1!\n");
            break;
        case 2:
            printf("You entered 2!\n");
            break;
        case 3:
            printf("You entered 3!\n");
            break;
        case 4:
            printf("You entered 4!\n");
            break;
        case 5:
            printf("You entered 5!\n");
            break;
        default:
            printf("nothing matched\n");
            break;
    }
    return 0;
    
}
