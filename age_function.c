/*
    Write a C program using function if user enter 
    age between 6 to 10 he join group pogo,
    19 to 20 he join gaurav's group,
    32 to 45 he join speritual group.
*/

// standard i/o header file
#include<stdio.h>
// function definition
int AGE(int age);
// main function
int main()
{
    // data initialization
    int a;
    // function calling
    AGE(a);
    return 0;
}
// function declaration
int AGE(int age)
{
    printf("Enter the value of AGE : ");
    scanf("%d",&age);
    // if(condtion)
    if(age>=0 && age<=6)
    {
        printf("User joins DEFAULT group");
    }
    // else if(condtion)
    else if(age>=6 && age<=10)
    {
        printf("User joins POGO group");
    }
    // else if(condtion)
    else if(age>=19 && age<=30)
    {
        printf("User joins Gaurav's group");
    }
    else if(age>=32 && age<=45)
    {
        printf("User joins Speritual group");
    }
    // else to print default output
    else
    {
        printf("please try another input value");
    }
}