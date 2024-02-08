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
    
    printf("Enter marks of M1 : ");
    scanf("%d",&m1);
    printf("Enter marks of M2 : ");
    scanf("%d",&m2);
    printf("Enter marks of M3 : ");
    scanf("%d",&m3);
    printf("Enter marks of M4 : ");
    scanf("%d",&m4);
    printf("Enter marks of M5 : ");
    scanf("%d",&m5);

    total=m1+m2+m3+m4+m5;
    avg=total/5;

    printf("The average of 5 Subjects is : %d\n",avg); 
    return 0;
}    