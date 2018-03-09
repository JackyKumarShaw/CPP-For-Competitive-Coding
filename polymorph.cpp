#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float);
int area(int s)
{
	return (s*s);
}
int area(int l,int b)
{
	return (l*b);
}
float area(float rad)
{
	return (3.14*rad*rad);
}
int main()
{
	int s,l,b;
	float rad;
	cout<<"Enter the side length and bredth and radius"<<endl;
	cin>>s>>l>>b>>rad;
	cout<<"The area of square="<<area(s)<<endl;
	cout<<"The area of rectangle="<<area(l,b)<<endl;
	cout<<"The area of circle="<<area(rad)<<endl;
	return 0;
}
