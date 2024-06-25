#include<stdio.h>
	int add(a,b)
	{
		int c;
		c=a+b;
		printf("%d",c);
	}
int main()
{
   int a,b;
   printf("Enter two Value of Addition : ");
   scanf("%d%d",&a,&b);
   add(a,b);
}	


