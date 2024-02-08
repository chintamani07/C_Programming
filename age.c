//Write a C program to accept AGE from the user.
 
// standard i/o header file 
#include<stdio.h>
// main function
int main()
{
    // data initialization
    int age;

    printf("Enter the value of AGE : ");
    scanf("%d",&age);
    
    // if(condition)
    if(age>=19)
    {
         printf("Chintu can drive");
    }
    // else to print default output
    else
    {
        printf("Chintu stay's at home");
    }
    return 0;
}