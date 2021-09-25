/* print the following pattern
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
		//for each line prints (5-i)*2 spaces
		for(j=1;j<=5-i;j++)
		{
			printf("  ");
		}
		//for each line prints i value i times
		for(k=j;k<=5;k++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
