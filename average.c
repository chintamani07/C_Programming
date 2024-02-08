//Write a C program to accept 5 subject marks & find the average.

// standard i/o header file
#include<stdio.h>
// main function
int main()
{
    // integer data initilization
    int m1,m2,m3,m4,m5;
    int total;
    int avg;
    
    printf("Enter marks of subject 1 : ");
    scanf("%d",&m1);
    printf("Enter marks of subject 2 : ");
    scanf("%d",&m2);
    printf("Enter marks of subject 3 : ");
    scanf("%d",&m3);
    printf("Enter marks of subject 4 : ");
    scanf("%d",&m4);
    printf("Enter marks of subject 5 : ");
    scanf("%d",&m5);
    printf("\n");

    total=m1+m2+m3+m4+m5;

    printf("Total Marks : %d",total);
    printf("\n");

    avg=total/5;

    printf("The average of 5 Subjects is : %d\n",avg); 
    return 0;
}    