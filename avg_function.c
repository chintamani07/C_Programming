/*
    Write a C program to accept 5 sub marks from user
    and find out avg using function.
*/

// standard i/o header file
#include<stdio.h>
// function definition
int AVG(int s1, int s2, int s3, int s4, int s5, int total, int average);

// main function
int main()
{
    // integer data initilization
    int a,b,c,d,e,tot,avg;
    // function calling
    AVG(a, b, c, d, e, tot, avg);
    return 0;
}
// function declaration
int AVG(int s1, int s2, int s3, int s4, int s5, int total, int average)
{
    printf("Enter marks of M1 : ");
    scanf("%d",&s1);
    printf("Enter marks of M2 : ");
    scanf("%d",&s2);
    printf("Enter marks of M3 : ");
    scanf("%d",&s3);
    printf("Enter marks of M4 : ");
    scanf("%d",&s4);
    printf("Enter marks of M5 : ");
    scanf("%d",&s5);
    printf("\n");

    total=s1+s2+s3+s4+s5;

    printf("Total Marks : %d",total);
    printf("\n");

    average=total/5;
    
    printf("\n");
    printf("The average of 5 Subjects is : %d\n",average);
}