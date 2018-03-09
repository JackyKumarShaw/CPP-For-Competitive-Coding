#include<iostream>
using namespace std;
void swap(int,int);
void swap(int a, int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"A="<<a<<" B="<<b<<endl;
}
int main()
{
	int a,b;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b;
	cout<<"A="<<a<<" B="<<b<<endl;
	swap(a,b);
	return 0;
} 
	
