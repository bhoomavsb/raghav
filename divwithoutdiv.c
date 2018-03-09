#include <stdio.h>
int main(void)
{
int a,b,i;
scanf("%d %d",&a,&b);
while(a>=b)
{
a=a-b;
i++;
}
printf("%d",i);

return 0;
}
