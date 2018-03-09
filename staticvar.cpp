#include<iostream>
using namespace std;
class student
{
	int roll,m[4];
	float avg;
	char name[20];
	static int count;
	private:
	void getdata();
	public:
	void putdata();	
};
int student::count;
void student::getdata()
{
	int sum=0;
	cout<<"Enter roll and name"<<endl;
	cin>>roll>>name;
	cout<<"ENTER MARKS"<<endl;
	for(int i=0;i<4;cin>>m[i],sum=sum+m[i++]);
	avg=sum/4;
	count++;		
}
void student::putdata()
{
	getdata();
	cout<<"Roll="<<roll<<endl;
	cout<<"Name="<<name<<endl;
	for(int i=0;i<4;cout<<"Marks "<<i<<" "<<m[i++]<<endl);
	cout<<"Average="<<avg<<endl;
	cout<<"Count="<<count<<endl;
}
int main()
{
	student obj1,obj2;
	obj1.putdata();
	obj2.putdata();
	return 0;
}
	
		
