//Write a C program to accept AGE from the user.

// standard i/o header file 
#include<stdio.h>
// main function
int main()
{
    // integer data initilization
    int age;

    printf("Enter the value of AGE : ");
    scanf("%d",&age);

    //if(condition)
    if(age>=18 && age<=100)
    {
         printf("Chintu can drive");
    }
    // else to print default output
    else
    {
        printf("Chintu is not eligible for license");
    }
    return 0;
}