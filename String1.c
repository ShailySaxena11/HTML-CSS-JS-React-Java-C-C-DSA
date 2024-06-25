#include<stdio.h>
int main()
{
	char a[5];
	char rev;
	printf("Enter your String ");
	gets(a);
	printf("Your Output ");
    puts(a);
    rev=strrev(a[5]);
    if(a==rev)
    {
    	printf("String is Palindrome \n");
	}
	else 
	{
    	printf("String is not Palindrome \n");
	}
}
