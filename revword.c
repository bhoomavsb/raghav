#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[10],b[10],c[10],d[10];
	scanf("%s %s",a,b);
	strcpy(c,b);
	strcpy(d,a);
	strcat(c,d);
	printf("%s",c);
	return 0;
}
