# print the following pattern
      * * * * *
      * * * * *
      * * * * *
      * * * * *
      * * * * * 
      
//The following code prints the above mentioned pattern

//C Code

#include<stdio.h>
int main()
{
      int i,j; 
      //As there are 5 rows and 5 columns run the loop from 1 to 5
      for(i=1;i<=5;i++)
      {
          for(j=1;j<=5;j++)
          {
              printf("* ");
          }
          printf("\n");
      }
      return 0;
}