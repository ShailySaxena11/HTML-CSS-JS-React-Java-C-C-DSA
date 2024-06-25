#include<stdio.h>
int main()
{
	char s[30];
	char ch;
	FILE *bb;
	bb=fopen("belti.txt","r");
	ch=fgetc(bb);
	while(!feof(bb))
	{
		printf("%c",ch);
		ch=fgetc(bb);
	}
	fclose(bb);
	getch();
}
