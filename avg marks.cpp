#include<stdio.h>
int main()
{
	int math,eng,hin,sci,total,avg;
	printf("enter marks math\n eng\n hin\n sci\n");
	scanf("%d%d%d%d",&math,&eng,&hin,&sci);
	total=(math+eng+hin+sci);
	avg=total/4;
	printf("%d=avg marks of student",avg);
}
