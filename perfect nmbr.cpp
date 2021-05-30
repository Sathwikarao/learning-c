#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
	sum=sum+i;
	}
	}
	if(i==sum)
	printf("perfect number");
	else
	{
	printf("not perfect number");
	}
}
