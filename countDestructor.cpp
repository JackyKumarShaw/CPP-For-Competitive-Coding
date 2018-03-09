#include<iostream>
using namespace std;
class A{
	static int count;
	public:
	A(){
		count++;
		cout<<"No. of objects created"<<count<<endl;
	}
	~A(){
		count--;
		cout<<"No. of objects remaining"<<count<<endl;
	}
};
int A::count;
main(){
	A ob1,ob2;
	{
		A ob3;
		{
			A ob4;
		}
		{
			A ob5;
		}
	}
}

