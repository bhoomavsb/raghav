#include <stdio.h>
int main(void)
{
int a[5][5],n,i,j,pro1=1,pro2=1,sum;
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
			pro1*=a[i][j];
			
		}
		if(j==n-i+1)
		{
			pro2*=a[i][j];
		}
	}
}
sum=pro1+pro2;
printf("%d",sum);
	return 0;
}
