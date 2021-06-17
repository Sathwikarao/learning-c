#include<stdio.h>
int main()
{
	int i,j,k,n=7;
	for(i=n;i>=1;i--)
	{
		for(j=i;j>1;j--)
		{
			printf(" ");
		}
		for(k=7;k>=i;k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
 /*   *
     ** 
    ***
   ****
  *****
 ******
******* 
*/
