#include <stdio.h>
int main(void)
{
	int i,n,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c=c+1;
	}
	if(c!=2)
	{
		printf("It is a Composite number");
	}
	else
	{
		printf("Not aComposite Number");
	}
	return 0;
}
