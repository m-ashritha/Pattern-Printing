/* print the following pattern

		 5 5 5 5 5 
		  4 4 4 4
		   3 3 3
		    2 2
		     1
*/

// C Code

#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		//for each line prints i spaces
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		//Each line prints (5-i+1) value (5-i+1) times followed by a space
		for(k=i;k<=5;k++)
		{
			printf("%d ",(5-i+1));
		}
		printf("\n");
	}
	return 0;
}
