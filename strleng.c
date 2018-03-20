#include <stdio.h>
#include<stdio.h>
int main(void)
{
char a[10];
int n,i,b;
scanf("%s",a);
scanf("%d",&n);
b=strlen(a);
for(i=b-n;i<b;i++)
{
	printf("%c",a[i]);
}

return 0;
}
