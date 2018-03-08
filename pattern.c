#include <stdio.h>
int main(void)
{
	int i,j,n,p=1;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			printf("%d\t",p);
      }
	printf("\n");
		}
	
	return 0;
}
