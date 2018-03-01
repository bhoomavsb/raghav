#include <stdio.h>
int main(void)
{
int n,i,product=1,rem;
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
product=product*rem;
n=n/10;
}
printf("%d",product);
	return 0;
}
