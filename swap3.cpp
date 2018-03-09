#include<iostream>
using namespace std;
void swap(int &,int &);
void swap(int &x, int &y)
{
	x=x+y;
	y=x-y;
	x=x-y;	
	cout<<"A="<<x<<" B="<<y<<endl;
}
int main()
{
	int a,b;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b;
	cout<<"A="<<a<<" B="<<b<<endl;
	swap(a,b);
        cout<<"A="<<a<<" B="<<b<<endl;
	return 0; 
}
	
