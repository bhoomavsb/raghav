#include <stdio.h>
int main(void)
{
char a[50];
int i;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
	if(i==0)
	{
		a[i]=toupper(a[i]);
	}
	if(a[i]==' ')
	{
		a[i+1]=toupper(a[i+1]);
	}


}
	printf("%s",a);
	return 0;
}
