#include<stdio.h>
int main()
{
	int i;
	char s[30];
	puts("Enter the String");
	gets(s);
	FILE *bb;
	bb=fopen("programming.txt","w");
	for(i=0;i<strlen(s);i++)
	{
		fputc(s[i],bb);
	}
	fclose(bb);
}
