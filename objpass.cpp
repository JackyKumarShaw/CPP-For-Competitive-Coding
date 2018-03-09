#include<iostream>
using namespace std;
class abc{

	int hour,min;
	public:
	void getdata(int a, int b){
		hour=a;
		min=b;
	}
	void add(abc time1,abc time2){
		int t=0;
		min=time1.min+time2.min;
		while(min>60){
			t=min/60;
			min=min%60;
		}		
		hour=time1.hour+time2.hour+t;
	}
	void showtime(){
		cout<<"Total Hour="<<hour<<" Total Minutes="<<min<<endl;
	}
};
int main(){
	int a,b;
	abc time1,time2,time3;
	cout<<"Enter first time:"<<endl;
	cin>>a>>b;
	time1.getdata(a,b);
	cout<<"Enter second time:"<<endl;
	cin>>a>>b;
	time2.getdata(a,b);
	time3.add(time1,time2);
	time3.showtime();
	return 0;
}

	

