#include<stdio.h>
int main()
{
	int n,i;
	float s=1.0;
	printf("enter n=");
	scanf("%d",&n);
	printf("\n %d terms of harmonic series=",n);
	for(i=2;i<=n;i++)
	{
		s+=(float)1/i;
		printf("1/%d+",i);
	}
	printf("\nsum is %f\n",s);
}
