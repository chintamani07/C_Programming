//Write a C program to calculate average of 5 marks. If avg is bet 80-90 his father gifts 4 wheeler.
//If user avg is 35-40 then he goes to MIDC. 

#include<stdio.h>
int main()
{
    // data definition
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
    printf("\n");
    
    total=m1+m2+m3+m4+m5;
    avg=total/5;

    printf("The average of 5 Subjects is : %d\n",avg); 
    // if(condition)
    if(avg>=80 && avg<=90)
    {
        printf("Father gifts 4 wheeler to user\n");
    }   
    // else if(condition)
    else if(avg>=35 && avg<=40)
    {
        printf("User goes to MIDC\n");

    }
    // else to print default output
    else
    {
        printf("User goes to college\n");
    }
    return 0;
}