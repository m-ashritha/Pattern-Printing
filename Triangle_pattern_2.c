/*print the following pattern 
	    1
	   2 2
	  3 3 3
	 4 4 4 4 
	5 5 5 5 5 		
*/

// C Code

#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(k=j;k<=5;k++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
/*-----------------------------------------
-----------------------------------------*/
// C++ Code
 
#include<iostream>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			cout<<" ";
		}
		for(k=j;k<=5;k++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
