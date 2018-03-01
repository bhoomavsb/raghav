#include <stdio.h>
int main(void)
{
int n1,n2,c;
scanf("%d %d",&n1,&n2);
c=(n1>n2)?n1:n2;
while(1)
{
	if((c%n1==0)&&(c%n2==0))
	{
		printf("%d",c);
		break;
	}
	++c;
}
	return 0;
}
