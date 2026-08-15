#include <stdio.h>
int main (){
    // for (int i=0;i<5;i++){
    //     //first loop for the rows 
    //     for (int j=0;j<=6;j++){
    //         //second loop for the columns
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // //basic code for pattern printing in C language. This code prints a rectangle of asterisks with 5 rows and 7 columns.
    
    // // creating a triangle where the int in each row is the same as the row number
    // printf("creating a triangle where the int in each row is the same as the row number: \nchoose a number for the rows: \n");
    // int r ;
    // scanf("%d",&r);
    // for(int i=1;i<r+1;i++){
    //     for(int j=1;j<=i;j++){
    //         printf("%d",i);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    

    // //same with increasing counting in each row
    // printf("creating a triangle with increasing counting in each row: \nchoose a number for the rows: \n");
    // int r1;
    // scanf("%d",&r1);
    // for(int i=1;i<r1+1;i++){
    //     for(int j=1;j<=i;j++){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }
    



    // // creating a inversse triangle with decreasing counting in each row
    // printf("\ncreating a inversse triangle with decreasing counting in each row: \nchoose a number for the rows: \n");
    // int r3;
    // scanf("%d",&r3);    
    // for(int i=1;i<=r3;i++){
    //     for(int j=r3-i+1;j>=1;j--){
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    printf("\ncreating a inversse triangle with decreasing counting in each row: \nchoose a number for the rows: \n");
    int r4;
    scanf("%d",&r4);
    for(int i=1;i<=r4;i++){
        for(int j=1;j<=r4-i+1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}