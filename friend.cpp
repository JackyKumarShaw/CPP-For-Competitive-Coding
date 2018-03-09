#include<iostream>
using namespace std;
class abc{

	int hour,min;
	public:
	void getdata(int a, int b){
		hour=a;
		min=b;
	}
	friend void add(abc,abc);
};
int main(){
	int a,b;
	abc time1,time2;
	cout<<"Enter first time:"<<endl;
	cin>>a>>b;
	time1.getdata(a,b);
	cout<<"Enter second time:"<<endl;
	cin>>a>>b;
	time2.getdata(a,b);
	add(time1,time2);
	return 0;
}
void add(abc time1,abc time2){
	int t=0;
	int min=time1.min+time2.min;
	if(min>60){
		t=min/60;
	}
	min=min%60;
	int hour=time1.hour+time2.hour+t;
	cout<<"Total Hour="<<hour<<" Total Minutes="<<min<<endl;
}
	

