#include<stdio.h>
int add(int a,int b)
{
	int c;
	c=a+b;
	printf("%d\n",c);
	return (c+2);
}
int main()
{int a,b;
 printf("Enter 2 values ");
 scanf("%d%d",&a,&b);	
 printf("Addition %d",add(a,b));
 }

