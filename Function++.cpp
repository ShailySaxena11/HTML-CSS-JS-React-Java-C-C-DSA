#include<iostream>
using namespace std;
class Demo
{
	public:
	void f1()
	{
		cout<<"Hello \n";
	}
	void f2()
	{
		cout<<"Welcome ";
	}
};
int main()
{
	Demo d;
	Demo b;
	b.f1();
	d.f2();
}
