#include<iostream>
using namespace std;
int a=30;
int main()
{
	int a=20;
	{
		int a=10;
		cout<<"a for inner block= "<<a<<endl;
		cout<<"a for outer block= "<<::a<<endl;
	}
	cout<<"a for inner block= "<<a<<endl;
	cout<<"a for outer block= "<<::a<<endl;
}

