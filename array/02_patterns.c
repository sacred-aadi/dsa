#include <stdio.h>
int main (){
    for (int i=0;i<5;i++){
        //first loop for the rows 
        for (int j=0;j<=6;j++){
            //second loop for the columns
            printf("* ");
        }
        printf("\n");
    }
    //basic code for pattern printing in C language. This code prints a rectangle of asterisks with 5 rows and 7 columns.
    
    // creating a triangle where the int increaases
    int r ;
    scanf("%d",&r);
    for(int i=1;i<r+1;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    

    //same with increasing counting in each row
    
    printf("\n");
    int r1 ;
    scanf("%d",&r1);
    for(int i=1;i<r1+1;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
        }
    }
    
