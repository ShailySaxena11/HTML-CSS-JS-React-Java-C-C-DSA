#include<stdio.h>
#include<String.h>
int main()
{
  char *a[]={"abc","defghi","jklmnop"};
  printf("%s\n",*a+1);//bc
  printf("%s\n",*(a+1));//defghi
  printf("%s\n",*(a+1)+4);//hi
  printf("%s\n",*(a+1)+4-3);//
}

