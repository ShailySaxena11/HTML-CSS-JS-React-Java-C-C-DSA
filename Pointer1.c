#include<stdio.h>
int main()
{

	int a[10]={10,20,30,40,50,60,70,80,90,100};
	int *p;
	p=&a;  // oR p=&a[0];
	printf("%d \n",a[0]);
	printf("%d\n",p);
	printf("%d\n",*p);
	printf("%d\n",(++p));
	printf("%d\n",*(++p));	
	printf("%d\n",*(p++));
	printf("%d\n",(p+2));
	printf("%d\n",*(p+2));
	p=&a[2];
	printf("%d\n",p);
	printf("%d\n",(p-1));
	printf("%d\n",*(p-1));
}
