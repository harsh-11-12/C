#include <stdio.h>
/*  arrays  */
int main(){
    int marks[90];

    marks[0]=12;
    marks[1]=13;
    //it can go all the way till marks[89]

    printf("Marks 0 and Marks 1 are %d , %d\n" ,marks[0],marks[1]); 
    //return 0;       

    int arr1[3]={10,19,180};
    printf("element is %d\n",arr1[2]);

    int mrks[5];
    
    printf("Enter marks of 5 student:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&mrks[i]);
    }

    for(int i=0;i<5;i++){
        printf("The address of marks at index %d is %lu\n",i,(unsigned long)(&mrks[i]));
    }

/*array using pointer*/
    int arr2[]={1,2,3,4};
    int *ptr= &arr2[0];
    // also same as int *ptr=arr2[0];

    for(int i=0;i<4;i++){
        // printf("element at index %d is %d\n",i,arr2[i]);
        printf("element at index %d is %d\n",i,*ptr);
        ptr++;
    }
    
/*multi dimensional array*/
    int arr3[3][2];

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("Enter the element of array at array[%d][%d]:",i,j);
            scanf("%d",&arr3[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("The value at array[%d][%d] is : %d\n",i,j,arr3[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf(" %d",arr3[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}