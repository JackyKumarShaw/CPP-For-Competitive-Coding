#include<iostream>
using namespace std;
float ci(int p,int n,float r=0.12);
float ci(int p,int n,float r)
{
	int y=1;
	float sum=p,k;
	while(y<=n)
	{
		k=sum;	
		sum=sum*(1+r);
		cout<<"The intrest for "<<y<<" year="<<(sum-k)<<endl;
		cout<<"The amount at the end of "<<y<<" year="<<sum<<endl;
		y++;
	}
return sum;
}
int main()
{
	int p,n;
	float a;
	cout<<"Enter the principle"<<endl;
	cin>>p;
	cout<<"Enter the time"<<endl;
	cin>>n;
	a=ci(p,n); 
	cout<<"The amount payble after "<<n<<" years is="<<a<<endl;
	return 0;
}

