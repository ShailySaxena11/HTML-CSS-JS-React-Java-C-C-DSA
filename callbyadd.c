#include<stdio.h>
int f1(int *a,int *b)
{
	int c;
	printf("Value Before Swapping \n");
	printf("Value of A is : %d \n",*a);
	printf("Value of B is : %d\n ",*b);
	c=a;
	a=b;
	b=c;
	printf("Value After Swapping \n");
	printf("Value of A is : %d \n",*a);
	printf("Value of B is : %d ",*b);
}
int main()
{
	int a=10;
	int b=59;
	f1(&a,&b);
}
