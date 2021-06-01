#include<stdio.h>
 int main()
{
	int n,choice;
	float pie=3.14;
	float a,l,b,h,s,r;
	printf("enter menu\n");
	printf("1.triangle\n");
	printf("2.square\n");
	printf("3.rectangle\n");
	printf("4.circle\n");
	printf("5.exit\n");
	printf("enter the choice=");
	scanf("%d",&choice);
	switch(choice)
{
    case 1:
    printf("enter height and breadth=");
    scanf("%f%f",&h,&b);
    a=h*b/2;
    printf("area of tringle=%f",a);
    break;
    case 2:
    printf("enter side=");
    scanf("%f",&s);
    a=s*s;
    printf("area of square=%f",a);
    break;
     case 3:
    printf("enter length and breadth=");
    scanf("%f%f",&l,&b);
    a=l*b;
    printf("area of rectangle=%f",a);
    break;
     case 4:
    printf("enter radius=");
    scanf("%f",&r);
    a=pie*r*r;
    printf("area of circle=%f",a);
    break;
    case 5:
    printf("exit file");
    break;
    default:
    printf("wrong value");
	}
	}
    
    
