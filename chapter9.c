#include <stdio.h>
#include <string.h>

typedef struct student{
    char name[50];
    char branch[25];
    int roll;
    float cgpa;
}std;

int main(){

    // struct student s1;
    // // strcpy(s1.name,"Harsh");
    // // strcpy(s1.branch ,"Btech Cse");
    // // s1.roll = 2415022;
    // // s1.cgpa = 9.8;

    // printf("Enter the name : \n"); 
    // scanf("%s",&s1.name);
    // printf("Enter the branch: \n");
    // scanf("%s",&s1.branch);
    // printf("Enter the roll number: \n");
    // scanf("%d",&s1.roll);
    // printf("Enter the CGPA: \n");
    // scanf("%f",&s1.cgpa);
       
    // printf("Name: %s \n",s1.name);
    // printf("Branch: %s \n",s1.branch);
    // printf("Roll number: %d \n",s1.roll);
    // printf("Cgpa: %f \n",s1.cgpa);
    
    // struct student s2={"Harsh Pant","B.tech",2415022,9.8};
    // printf("Name: %s \n",s2.name);
    // printf("Branch: %s \n",s2.branch);
    // printf("Roll number: %d \n",s2.roll);
    // printf("Cgpa: %.2f \n",s2.cgpa);

    // /*structure to pointer*/
    // struct student s3={"Pointer"};
    // struct student *ptr;
    // ptr = &s3;
    // printf("Structure to %s \n",(*ptr).name);
    // printf("Structure to %s \n",ptr-> name);
    // return 0;

    std s4={"Harsh Pant","B.tech",2415022,9.8};
    printf("Name: %s \n",s4.name);
    printf("Branch: %s \n",s4.branch);
    printf("Roll number: %d \n",s4.roll);
    printf("Cgpa: %.2f \n",s4.cgpa);
}