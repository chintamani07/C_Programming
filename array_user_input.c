// Write a C program to accept user input and print the array elements.

// standard i/o header file
#include<stdio.h>
int main()
{
    // 1D array initialization
    int marks[4];

    // accept array elements from user
    printf("Enter array elements : \n"); 

    // for loop(initialization; condition; increment or decrement)  
    for(int i=0;i<4;i++)
    {
    scanf("%d",&marks[i]);
    }        
    // display array elements
    printf("The Array Elements are : \n");
    
    // for loop(initialization; condition; increment)
    for(int i=0;i<4;i++)
    {
    printf("%d\n",marks[i]);
    }
    return 0;
}          