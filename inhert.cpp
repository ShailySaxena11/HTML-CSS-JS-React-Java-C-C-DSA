#include<iostream>
using namespace std;
class A
{
	public:
		void f1()
		{
			printf("WE are learning inheritence from Class A");
		}
};
class B:virtual public A
{
	public:void f2()
	{
		printf("This is class B");
	}
};
class C:virtual public A 
{
	public:void f3()
	{
		printf("This is class C");
	}
};
class D:public C, public B
{
   public :
   void f4()
   {
	printf("This is class D");   	
   }	
};
int main()
{
	D aa;
    aa.f1();
    aa.f2();
    aa.f3();
    aa.f4();
}

