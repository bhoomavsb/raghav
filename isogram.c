#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[50];
	int i,j,count=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='0';j++)
		{
			if(a[i]==a[j])
			{
			count++;
			}
		}
	}
	if(count==0)
	{
	printf("It is an isogram");
	}
	else
	{
		printf("It is not an isogram");
	}
	return 0;
}
