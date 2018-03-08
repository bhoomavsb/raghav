#include <stdio.h>
int main(void)
{
int a,b,c,d;
scanf("%d",&a);
b=a/10;
c=a%10;
d=((c*c)+(b*b));
printf("sum of the squares of the digits are:%d",d);
	return 0;
}
