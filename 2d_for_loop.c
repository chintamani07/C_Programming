// Write a C program to use For loop using Array.

// standard i/o header file 
#include<stdio.h>
// main function
int main(){
   // 2D array declaration
   int rollno[2][3];

   // integer data initilization
   int i, j;
   // for(initilization; condition; increment)
   for(i=0; i<2; i++) 
   {
      // inner for loop
      for(j=0;j<3;j++) 
      {
         printf("Enter value for roll no [%d][%d]:", i, j);
         scanf("%d", &rollno[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
    // for(initilization; condition; increment)
     for(i=0; i<2; i++) 
     {
      // inner for loop
      for(j=0;j<3;j++) 
      {
         printf("%d ", rollno[i][j]);
      }
   }
   return 0;
}