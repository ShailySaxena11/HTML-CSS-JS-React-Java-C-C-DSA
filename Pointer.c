#include<stdio.h>
int f1(int x)
{
	printf("%d\n",x);
	return(x+2);
}
int main()
{
	int (*p)(int x);
	p=f1;
	int x=10;
	printf("%d",p(x));
}
