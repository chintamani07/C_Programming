// Write a C program to accept 5 subject marks from user & print it.

// standard i/o header file
#include<stdio.h>
// main function 
int main()
{
    // 1D array initialization
    int marks[5];

    // accepting marks from user
    printf("Enter the student marks : \n");
    scanf("%d",&marks[0]);
    scanf("%d",&marks[1]);
    scanf("%d",&marks[2]);
    scanf("%d",&marks[3]);
    scanf("%d",&marks[4]);

    // displaying user marks
    printf("The student marks: \n");

    // for loop(initialization; condition; increment or decrement)
    for(int i=0; i<5; i++)
    {
        printf("%d\n",marks[i]);
    }
    return 0;
}