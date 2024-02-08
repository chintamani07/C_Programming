/*
    Write a C program using function to print 1-10 numbers 
    in asc as well as des order.
*/

// standard i/o header file
#include<stdio.h>
// function definition
int ASC_DEC(int num);
// main function
int main()
{
    // data initilization
    int a;
    // function calling
    ASC_DEC(a);
    return 0;
}
// function declaration
int ASC_DEC(int num)
{
    printf("The numbers in ASCENDING order are : \n");
    // for loop(initialization; condition; increment)
    for(num=0; num<=10; num++)
    {
        printf("%d\n",num);    
    }
    printf("\n");
    printf("The numbers in DESCENDING order are : \n");
    // for loop(initialization; condition; decrement)
    for(num=10; num>=0; num--)
    {
        printf("%d\n",num);
    }
}