#include <stdio.h>
int main(void)
{
int i,j,n,p=1;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
	for(j=0;j<=i;j++)
	{
		printf("%d\t",p);
	}
	printf("\n");
	i++;
}
	return 0;
}
