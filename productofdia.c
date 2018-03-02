#include <stdio.h>
int main(void)
{
int a[5][5],n,i,j,sum1=0,sum2=0,product;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		if(i==j)
		{
			sum1+=a[i][j];
			
		}
		if(j==n-i+1)
		{
			sum2+=a[i][j];
		}
	}
}
product=sum1*sum2;
printf("%d",product);
	return 0;
}
