#include<stdio.h>
int main()
{
	int i;
	char s[]="Balbu Loves Betli";
	FILE *bb;
	bb=fopen("Babu.txt","w");
	for(i=0;i<strlen(s);i++)
	{
		fputc(s[i],bb);
	}
	//getch();
	fclose(bb);
	//getch();
}
