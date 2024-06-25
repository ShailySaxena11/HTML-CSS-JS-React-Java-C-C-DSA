#include<stdio.h>
f1(int  a)
{
	if(a==0)
	{
		return 1;
	}
	else
	{
		return 4+f1(a-1);
	}
}
void main()
{
	int a=5;
	printf("%d",f1(a));
}



