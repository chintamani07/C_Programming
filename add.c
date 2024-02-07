//write a C program to add 1-100 numbers. 

// standard i/o header file
#include<stdio.h>
// main function
int main()
{
    // data initialization
    int sum=0;
    int num;

    // for loop(initialization; condition; increment or decrement)
    for(num=0; num<=100; num++)
    {
        sum=sum+num;
    }
    printf("The Sum of 1-100 numbers is : %d",sum);
    return 0;
}