#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[50];
	int i,n,sum=0;
	scanf("%s %d",a,&n);
	
	for(i=0;i<=n;i++)
	{
		if((a[i]>='a')&&(a[i]<='z'))
		sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
