
# print the following pattern
      * * * * *
      * * * * *
      * * * * *
      * * * * *
      * * * * * 
      
//The following code prints the above mentioned pattern

//Cpp Code

#include<iostream>
using namespace std;
int main()
{
      int i,j; 
      //As there are 5 rows and 5 columns run the loop from 1 to 5
      for(i=1;i<=5;i++)
      {
          for(j=1;j<=5;j++)
          {
              cout<<"* ";
          }
          cout<<endl;
      }
      return 0;
}
