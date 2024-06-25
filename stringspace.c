#include<stdio.h>
int main()
{
	char a[20];
	int c=0;
	printf("Enter your String ");
	gets(a);
	int i;
	printf("Your Output ");
	for(i=0;a[i]!='\0';i++)
	{
		printf("%s",a[i]);
		c++;
	}
 //   puts(a);
	printf("space is %d",c);
}
	
