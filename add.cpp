#include<iostream>
int fun(int,int);
using namespace std;
int main()
{
	int a,b,z;
	cout<<"Enter any two integers"<<endl;
	cin>>a>>b;
	z=fun(a,b);
	cout<<"The sum of "<<a<<" and "<<b<<" is = "<<z<<endl;
}
inline int fun(int x,int y)
{
	int z;
	z=x+y;
	return z;
}


