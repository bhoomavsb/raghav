#include <stdio.h>
int main(void)
{
int i,a[10],n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
	if(a[i]!=i)
	{
		printf("%d",i);
		
	}
}
	return 0;
}
