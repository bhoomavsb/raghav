#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[50];
	int i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(i%2==0)
		{
			printf("%c",a[i]);
		}
	}
	printf("\t");
	for(i=0;a[i]!='\0';i++)
	{
		if(i%2==1)
		{
			printf("%c",a[i]);
		}
	}
	
	return 0;
}
