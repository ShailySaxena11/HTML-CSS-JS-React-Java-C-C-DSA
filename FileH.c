#include<stdio.h>
int main()
{
	int i;
	char s[]="Hello world";
	FILE *bb;
	bb=fopen("world.txt","w");
	for(i=0;i<strlen(s);i++)
	{
		fputc(s[i],bb);
	}
	//getch();
	fclose(bb);
	//getch();
}
