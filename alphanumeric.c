#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[10];
	int i,l;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<=l;i++)
	{
		if((a[i]>='0')&&(a[i]<='9'))
	   {
	   	printf("%c",a[i]);
		}
	}
	return 0;
}
