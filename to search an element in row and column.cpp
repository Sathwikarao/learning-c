#include <stdio.h>
int main()
{
int a[10][10],n,m,i,j,x;
printf("Enter sixe of matrix:\n");
scanf("%d%d",&n,&m);
printf("Enter the elements of matrix:\n");
for(i=0;i<n;i++)
       {
        for(j=0;j<m;j++)
          {  
           scanf("%d",&a[i][j]);
          }
       }
printf("Enter the search element: ");
scanf("%d",&x);
i=0;
j=m-1;
while(i<n&&j>=0)
{
if(a[i][j]==x)
{
printf("Element is found at %d,%d\n",i+1,j+1);
return 0;
}
if(a[i][j]<x)
i++;
else
j--;
}
printf("Element is not found\n");
}
