#include <stdio.h>
int main(void)
{
	int n,i,dig;
	scanf("%d",&n);
	while(n!=0)
	{
		dig=n%10;
	    printf("%d",dig);
	    n=n/10;
	}
	
	return 0;
}
