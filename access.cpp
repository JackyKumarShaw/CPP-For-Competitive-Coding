#include<iostream>
using namespace std;
class student
{
	int roll,m[4];
	float avg;
	char name[20];
	public:
	void getdata()
	{
		int sum=0;
		cout<<"Enter roll and name"<<endl;
		cin>>roll>>name;
		cout<<"ENTER MARKS"<<endl;
		for(int i=0;i<4;cin>>m[i],sum=sum+m[i++]);
		avg=sum/4;
		
	}
	void putdata()
	{
		cout<<"Roll="<<roll<<endl;
		cout<<"Name="<<name<<endl;
		for(int i=0;i<4;cout<<"Marks "<<i<<" "<<m[i++]<<endl);
		cout<<"Average="<<avg<<endl;
	}
};

int main()
{
	student obj;
	obj.getdata();
	obj.putdata();
	return 0;
}
	
		
