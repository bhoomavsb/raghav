#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[20];
	int b,x=0,y=0;
	scanf("%s",a);
	for(b=0;a[b]!='\0';b++)
	{
		if((a[b]>='0')&&(a[b]<='9'))
		{
			x++;
		}
		if((a[b]>='a')&&(a[b]<='z'))
		{
			y++;
		}
	}
	if((x>=1)&&(y==0))
	{
		printf("yes");
	}
	else
	{
		printf("no");

	return 0;
}
