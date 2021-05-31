#include<stdio.h>
int main()
{
	int i,n,mul;
	printf("enter number to print table:");
	scanf("%d",&n);
	i=1;
	do
	{
		mul=n*i;
		printf("%d*%d=%d\n",n,i,mul);
		i++;
	}
	while(i<=20);
}
	

